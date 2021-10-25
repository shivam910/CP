#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
	ll a,b,c,ans=0;
	cin>>a>>b>>c;
	ans= a+2*b+3*c;
	if(ans%2) cout<<1<<"\n";
	else cout<<"0\n";
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
