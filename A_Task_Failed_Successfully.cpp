#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a < b)
        {
            count++;
        }
    }
    cout<<count<<endl;
}