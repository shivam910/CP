#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;//                      this will store set in increasing order.
    //set <int, greater<int>> s;        this will store set in decreasing order.
    s.insert(10);
    s.insert(5);
    s.insert(1);
    s.insert(8);
    for(auto i:s)
        cout<<i<<" ";
    cout<<endl;
    for(auto i= s.begin();i!=s.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    for(auto i=s.rbegin();i!=s.rend(); i++)//       rbegin or rend will iterate in reverse order.
       cout<<*i<<" ";

    s.erase(s.begin());//               this will erase the element present at starting of the set

    for( auto i:s)
    cout<<i<<endl; 

    cout<<s.size();//                   this will print the size of the set
}