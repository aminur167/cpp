#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solve()
{
    int n;
    if (!(cin >> n))
        return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        if (!(cin >> a[i]))
            return 0;
    }

    const vector<int> primes = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97};

    for (int p : primes)
    {
        bool p_is_coprime_to_some_a = false;
        for (long long val : a)
        {
            if (val % p != 0)
            {
                p_is_coprime_to_some_a = true;
                break;
            }
        }

        if (p_is_coprime_to_some_a)
        {
            return p;
        }
    }

    return -1;
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
        cout << solve() << "\n";
    }

    return 0;
}
