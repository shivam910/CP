//Codeforces Registration System

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(i, a, n) for(ll i=a;i<n ;i++ )
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);


int  main() {
      speed
	ll t;
	cin>>t;
	map <string,int> db;
	string s;
      for(ll i=0; i<t; i++)
      {     
            cin>>s;
            if(db.count(s)==0)
            {
                  cout<<"OK"<<"\n";
                  db[s]=1;
            }
            else
            {
                  cout<<s<<db[s]<<"\n";
                  db[s]+=1;
            }
      }
	return 0;
}
