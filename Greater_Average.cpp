#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    float avg;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        avg= float(a+b)/2;
        if(avg>c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}