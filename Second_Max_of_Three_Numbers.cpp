#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a<b&&b<c||a>b&&b>c)
        {
            cout<<b<<endl;
        }
        else if(b<a&&a<c||b>a&&a>c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }

    }
}