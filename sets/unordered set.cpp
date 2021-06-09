#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set <int> s;
    s.insert(1);
    s.insert(3);
    s.insert(6);
    s.insert(5);
    for( auto i:s)
    cout<<i<<" "; //        the nos will be stored in unordered way
}