#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,r,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        r=4*a;
        if(r<=1000)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}