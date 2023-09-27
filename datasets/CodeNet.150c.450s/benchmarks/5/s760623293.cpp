#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int>v;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    cout<<v[0];
    for(int i=1; i<t; i++)
    {
        cout<<" "<<v[i];
      }
        cout<<endl;

    return 0;
}

