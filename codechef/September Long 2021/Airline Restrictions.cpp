#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll a,b,c,d,e,mini;
      cin>>a>>b>>c>>d>>e;
      if(((a+b<=d) && c<=e)||((c+b<=d) && a<=e)||((a+c<=d) && b<=e)) cout << "YES\n";
      else cout << "NO\n";
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
