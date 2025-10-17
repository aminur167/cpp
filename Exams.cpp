#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if((a*b)/2<c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}