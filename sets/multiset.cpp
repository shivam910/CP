#include <bits/stdc++.h>
using namespace std;
int main(){

    multiset <int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);//              It can save multiple same values
    s.insert(5);
    for( auto i:s)
    cout<<i<<" ";
    s.erase(3);//               It will erase all the occurence of 3
    // to prevent it we use s.find(3) this will give us thefirst ocuurence of 3

s.erase(s.find(3));
}