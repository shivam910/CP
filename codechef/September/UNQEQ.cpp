#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<=n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll n;
      cin>>n;
      if(n%4 != 0) cout<<"NO\n";
      else {
            cout<<"YES\n";
            vector <ll> v1;
            vector <ll> v2;
            ll a=1,b=n,check=n/2;
            bool code= false;
            while(check)
            {
                  if(code == false)
                  {
                        v1.push_back(a);
                        a++;
                        code = true;
                  }
                  else
                  {
                        v1.push_back(b);
                        b--;
                        code = false;
                  }
                  check--;
            }
            f(i,a,b)
            v2.push_back(i);
            sort(v1.begin(),v1.end());
            sort(v2.begin(), v2.end());
            
            for(auto k: v1)
            cout<<k<<" ";
            cout<<"\n";
            for(auto k: v2 )
            cout<<k<<" ";
            cout<<"\n";
      }
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
