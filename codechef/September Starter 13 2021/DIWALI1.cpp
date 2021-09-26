#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll p,a,b,c,x,y,ans;
      cin>>p>>a>>b>>c>>x>>y;
      ans=min((x*a+b),(y*a+c));
      cout<<p/ans<<"\n";
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