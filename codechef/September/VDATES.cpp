#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll d,l,r;
      cin>>d>>l>>r;
      if(d<=r && d>=l)
      cout<<"Take second dose now\n";
      else if(d<l)
      cout<<"Too Early\n";
      else cout<<"Too Late\n";
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