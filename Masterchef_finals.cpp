#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a>=1 && a<=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}