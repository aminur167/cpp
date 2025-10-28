#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int arr[4] = {a, b, c, d};
        sort(arr, arr + 4);
        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
