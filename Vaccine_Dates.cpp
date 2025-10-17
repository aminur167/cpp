#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a>c)
        {
            cout<<"Too Late"<<endl;
        }   
        else if(a<b)
        {
            cout<<"Too Early"<<endl;
        }
        else
        {
            cout<<"Take second dose now"<<endl;
        }
    }
}
