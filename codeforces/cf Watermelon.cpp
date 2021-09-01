// CodeForces : Watermelon

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll w;
      cin>>w;
      if((w%2==0)&&(w>2))
      cout<<"YES"<<"\n";
      else cout<<"NO";
}

int  main() {
      speed
	func();
	return 0;
}