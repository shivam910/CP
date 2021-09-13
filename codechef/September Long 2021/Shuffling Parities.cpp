#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll n,even=0,odd=0;
      cin>>n;
      ll ao=n/2;
      int a[n];
      f(i,0,n)
      {
            cin>>a[i];
            if(a[i]%2==0)
            even++;
            else odd++;
      }
      if(n%2==1)
      ao++;
      cout<<min(even,ao)+min(n/2,odd)<<"\n";
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
