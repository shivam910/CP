#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t; 
    while(t--)
    {
        long long int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
    
        int pos= abs(a-c)+abs(b-d);
        if(pos>k){
        cout<<"NO"<<endl;
        continue;
        }
        pos-=k;
        if((pos % 2) ==0) 
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        }      
    return 0;
