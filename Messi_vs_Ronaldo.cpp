#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int r1=a*2+b;
    int r2=c*2+d;
    if(r1==r2)
    {
        cout<<"Equal"<<endl;
    }
    else if(r1>r2)
    {
        cout<<"Messi"<<endl;
    }
    else
    {
        cout<<"Ronaldo"<<endl;
    }
}