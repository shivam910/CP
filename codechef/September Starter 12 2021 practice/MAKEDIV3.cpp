#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll x;
      cin>>x;
      if(x==1) cout<<"3"<<"\n";
      else if(x==2) cout<<"33"<<"\n";
      else {
            cout<<"3"<<0*(x-2)<<"3"<<"\n";
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
