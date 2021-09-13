#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll n,a,b,sum=0;
      cin>>n>>a>>b;
      string s;
      cin>>s;
      f(i,0,n)
      {
            if(s[i]=='0' )
            sum+=a;
            else sum+=b;
      }
      cout<<sum<<"\n";
      
}

int  main() {
      speed
	ll t;
	cin>>t;
	while(t--)
	{
	      func();
	}
	return 0;
}
