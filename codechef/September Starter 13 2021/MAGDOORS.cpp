#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ; )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll ans=1;
      string s;
      cin>>s;
      char c = s[0];
      ll n=s.size();
      f(i,1,n)
      {
            while(i<n && s[i]==c)
            i++;
            if( i<n && s[i]!= c)
            ans++;
            c=s[i];
            i++;
      }
      if(s[0]=='1') ans--;
      cout<<ans<<"\n";
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