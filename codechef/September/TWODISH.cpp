#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll n, a, b, c;
      cin>>n>>a>>b>>c;
      if(b<n)
      cout<<"NO\n";
      else if(b>=n && a+c >= n)
      cout<<"YES\n";
      else cout<<"NO\n";
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