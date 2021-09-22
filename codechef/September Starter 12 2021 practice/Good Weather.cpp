#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);

void func(){
      ll a[7],count=0;
      f(i,0,7)
      {
            cin>>a[i];
            if(a[i]==1) count++;
      }
      if(count>3) cout<<"YES"<<"\n";
      else cout<<"NO"<<"\n";
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
