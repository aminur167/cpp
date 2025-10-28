#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    if (!(cin >> n))
        return;

    vector<int> a(n);
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    if (even_count > 0 && odd_count > 0)
    {
        sort(a.begin(), a.end());
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }

    return 0;
}
