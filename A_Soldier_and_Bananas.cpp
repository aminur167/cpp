#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=w*(w+1)/2;
    int cost=k*sum;
    int final=cost-n;
    if(final<0)
    {
        final=0;
    }
    cout<<final<<endl;

}