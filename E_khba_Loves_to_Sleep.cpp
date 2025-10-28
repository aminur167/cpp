#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

bool check(ll dist, const vector<ll> &a, int k, ll x, vector<ll> &spots)
{
    spots.clear();
    vector<pair<ll, ll>> bad;
    for (ll pos : a)
    {
        ll l = max(0LL, pos - dist + 1);
        ll r = min(x, pos + dist - 1);
        if (l <= r)
            bad.push_back({l, r});
    }
    if (bad.empty())
    {
        for (ll i = 0; i < k && i <= x; i++)
            spots.push_back(i);
        return spots.size() >= k;
    }
    sort(bad.begin(), bad.end());
    vector<pair<ll, ll>> merged;
    merged.push_back(bad[0]);
    for (size_t i = 1; i < bad.size(); i++)
    {
        if (bad[i].first <= merged.back().second + 1)
            merged.back().second = max(merged.back().second, bad[i].second);
        else
            merged.push_back(bad[i]);
    }
    ll current_pos = 0;
    for (const auto &interval : merged)
    {
        for (ll pos = current_pos; pos < interval.first && pos <= x; ++pos)
        {
            spots.push_back(pos);
            if (spots.size() == k)
                return true;
        }
        current_pos = interval.second + 1;
    }
    for (ll pos = current_pos; pos <= x; ++pos)
    {
        spots.push_back(pos);
        if (spots.size() == k)
            return true;
    }
    return spots.size() >= k;
}

void solve()
{
    int n, k;
    ll x;
    cin >> n >> k >> x;
    vector<ll> friends(n);
    for (int i = 0; i < n; i++)
        cin >> friends[i];
    sort(friends.begin(), friends.end());
    ll low = 0, high = x + 2;
    vector<ll> bestSpots;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        vector<ll> spots;
        if (check(mid, friends, k, x, spots))
        {
            bestSpots = spots;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    for (int i = 0; i < k; i++)
        cout << bestSpots[i] << (i == k - 1 ? "" : " ");
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
