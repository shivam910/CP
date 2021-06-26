#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--)
    {   long long int D,d,A,B,C;
        cin>>D>>d>>A>>B>>C;
        
            int total=D*d;
            
            if(total >= 42)
            {
                cout<<C<<endl;
            }
            else if( total >= 21)
            {
                cout<<B<<endl;
            }
            else if( total >= 10)
            {
                cout<<A<<endl;
            }
            else cout<<"0"<<endl;
        
    }
	return 0;
}
