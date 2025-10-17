#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long a;
        cin>>a;
        if(a%2050!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        long long b=a/2050;
        int sum=0;
        while(b>0)
        {
            sum=sum+b%10;
            b=b/10;
        }
        cout<<sum<<endl;
    }
}