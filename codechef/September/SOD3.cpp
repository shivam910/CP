#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<=n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll l,r;
      cin>>l>>r;
      if(l%3==0)
            cout<< (r/3)- (l/3) + 1 <<"\n";
      else 
            cout<< (r/3) -(l/3)<<"\n";
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