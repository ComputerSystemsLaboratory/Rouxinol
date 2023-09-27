#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>s(n);vector<int>v(m);
    vector<vector<int> >a(n,vector<int>(m));
    REP(i,n) REP(j,m) cin>>a.at(i).at(j);
    REP(i,m) cin>>v.at(i);
    
    REP(i,n)
    {
        int sum=0;
        REP(j,m)
        {
            sum+=a.at(i).at(j)*v.at(j);
        }
        cout<<sum<<endl;
    }
}

