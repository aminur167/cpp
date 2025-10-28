#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Maximum number of nodes
const int MAXN = 200005;

// Adjacency list for the tree
vector<int> adj[MAXN];

// Stores the size of the subtree rooted at i (when rooted at 1)
int subtree_size[MAXN];

// Total number of nodes
int n_global;

/**
 * @brief Performs DFS to compute subtree sizes.
 * @param u The current node.
 * @param p The parent node.
 */
void dfs_size(int u, int p)
{
    subtree_size[u] = 1; // The node itself
    for (int v : adj[u])
    {
        if (v != p)
        {
            dfs_size(v, u);
            subtree_size[u] += subtree_size[v];
        }
    }
}

/**
 * @brief Solves the problem for a single test case.
 */
void solve()
{
    int n, k;
    cin >> n >> k;
    n_global = n;

    // Clear previous test case data
    for (int i = 1; i <= n; ++i)
    {
        adj[i].clear();
    }

    // Read edges
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // 1. Preprocessing: Calculate subtree sizes (root arbitrarily at 1)
    if (n > 0)
    {
        dfs_size(1, 0);
    }

    // 2. Count the number of "valid" nodes C
    long long valid_nodes_count = 0;

    // Iterate through all nodes v
    for (int v = 1; v <= n; ++v)
    {
        int max_component_size = 0;

        // Components below v (subtrees of its children)
        for (int u : adj[v])
        {
            // Determine which node is the child and which is the parent in the tree rooted at 1
            // A child c has subtree_size[c] < subtree_size[v]
            // A parent p has subtree_size[p] > subtree_size[v]

            // If v is NOT the root (node 1) and u is the parent of v (i.e., subtree_size[u] > subtree_size[v]),
            // then we skip this for calculating sizes of components BELOW v.

            // To be precise: The size of the component formed by removing v is the size of the
            // subtree rooted at u, IF u is a child of v (in the tree rooted at 1).
            // This is simply subtree_size[u].

            // If u is a child of v (meaning v is u's parent in the tree rooted at 1)
            // OR if u is the parent of v (meaning v is u's child in the tree rooted at 1)
            // we must determine which one it is.

            // Simpler approach: Check the subtree size.
            // If subtree_size[u] < subtree_size[v] (u is a child of v or u is not 1 and v is its parent)
            // and v is NOT the root (node 1), OR v is the root:
            if (v != 1 && subtree_size[u] > subtree_size[v])
            {
                // u is the parent of v in the tree rooted at 1. The component size is handled by n - subtree_size[v]
                // Do nothing here, size of component above is calculated below.
            }
            else
            {
                // u is a child of v OR v is the root (1). Component size is subtree_size[u].
                max_component_size = max(max_component_size, subtree_size[u]);
            }
        }

        // This is the correct logic for components BELOW v:
        // We only consider u as a child of v if u's subtree_size has already been computed
        // and is smaller than v's, which means it was visited *before* v in the DFS.
        // The *only* neighbor of v that is NOT a child (in the tree rooted at 1) is its parent.
        for (int u : adj[v])
        {
            // Check if u is a child of v (in the tree rooted at 1)
            // A child will have a smaller subtree_size than its parent.
            if (v != 1 && subtree_size[u] > subtree_size[v])
            {
                // u is the parent, skip for component below v calculation
                continue;
            }
            else if (v == 1 && subtree_size[u] > subtree_size[v])
            {
                // Should not happen, subtree_size[1] is n, all others are < n
                // But if it were a child, its size is subtree_size[u]
            }
            else
            {
                // u is a child of v (or v is 1, and u is its child)
                max_component_size = max(max_component_size, subtree_size[u]);
            }
        }

        // Component above v (containing the root 1)
        // Only if v is NOT the root 1
        if (v != 1)
        {
            // The size of the component above v is n - subtree_size[v]
            int size_above = n - subtree_size[v];
            max_component_size = max(max_component_size, size_above);
        }

        // 3. Check the condition: S_max(v) < k
        if (max_component_size < k)
        {
            valid_nodes_count++;
        }
    }

    // The answer is n * |C|
    long long kawaiiness = n * valid_nodes_count;
    cout << kawaiiness << endl;
}

// Boilerplate for handling multiple test cases
int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}