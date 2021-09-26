#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll n,p,x,y,time=0;
      cin>>n>>p>>x>>y;
      ll a[n];
      for(int i=0; i<n; i++)
      {
            cin>>a[i];
      }
      for(int i=0; i<p; i++)
      {
            if(a[i]==1)
            time+=y;
            else
            time+=x;
      }
      cout<<time<<"\n";
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