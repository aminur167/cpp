#include <iostream>
#include <cstdio>
using namespace std;

int maximum(int a,int b,int c,int d)
{
    int max1=max(a,b);
    int max2=max(c,d);
    return max(max1,max2);
}

int main() 
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans=maximum(a,b,c,d);
    cout<<ans<<endl;
    
    return 0;
}