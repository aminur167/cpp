#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<"LOSS"<<endl;
        }
        else if(a<b)
        {
            cout<<"PROFIT"<<endl;
        }
        else
        {
            cout<<"NEUTRAL"<<endl;
        }
    }
}