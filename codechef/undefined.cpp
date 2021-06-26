#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int N,x,k;
        cin>>N>>x>>k;
        int total=N+2;
        
        
            if((x%k)==0)
            {
                cout<<"YES"<<endl;
            }
            else
            if((N+1-x)%k==0)
            {
                cout<<"YES"<<endl;
            }
            else
             cout<<"NO"<<endl;

    }
}