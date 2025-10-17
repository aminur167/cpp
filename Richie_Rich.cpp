#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c,t;
    int result;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        result=(b-a)/c;
        cout<<result<<endl;
    }
}
