#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>odd,even;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        for(int x:odd)
        {
            cout<<x<<" ";
        }
        for(int x:even)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

}