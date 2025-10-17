#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int even=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        if(b%2==0)
        {
            even++;
        }
    }
    int odd=a-even;
    if(even>odd)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }
}