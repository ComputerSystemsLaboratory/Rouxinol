#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main()
{
    int64_t n,sum=0;
    cin>>n;
    vector<int64_t>x(n);
    REP(i,n){cin>>x[i];sum+=x[i];}
    sort(x.begin(),x.end());
    cout<<x[0]<<" "<<x[x.size()-1]<<" "<<sum<<endl;
}

