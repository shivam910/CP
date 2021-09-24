// https://www.codechef.com/problems/COINS

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for( ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);
map <ll,ll> dp;

long long func(ll num){
      if( num < 12 )
           return  dp[num] = num;
      if(dp[num]) return dp[num];
           return  dp[num] = max(num, func(num/2) + func(num/3) + func(num/4));
}

int  main() {
      speed
	ll num;
	while(cin>>num)
	{
	      cout<<func(num)<<"\n";
	      
	}
	return 0;
}
