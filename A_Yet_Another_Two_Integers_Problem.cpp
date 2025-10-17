#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        long int diff=abs(a-b);
        cout<<(diff+9)/10<<endl;
    }
    return 0;
}