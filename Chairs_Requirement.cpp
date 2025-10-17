#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            r=a-b;
            cout<<r<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}