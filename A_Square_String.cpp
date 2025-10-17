#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        string first=s.substr(0,n/2);
        string second=s.substr(n/2);   
        if(first==second)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}