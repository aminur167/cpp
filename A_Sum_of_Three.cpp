#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n < 7) {
            cout << "NO\n";
            continue;
        }
        long long x, y, z;
        x = 1; y = 4; z = n - 5;
        if (z % 3 == 0 || z == x || z == y) {  
            x = 2; y = 5; z = n - 7;
        }
        if (z <= 0 || z == x || z == y || z % 3 == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << x << " " << y << " " << z << "\n";
        }
    }
}
