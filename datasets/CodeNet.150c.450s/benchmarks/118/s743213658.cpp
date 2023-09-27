#include <bits/stdc++.h>
#include <numeric>
#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG true
#define LL long long
#define Num 1000000007
// sort(a.begin(), a.end(), std::greater<int>());
using namespace std;

struct data{
    int y,m,d;
};

int main(){
    int n;
    cin>>n;
    data start;
    start.y=1000;
    start.m=1;
    start.d=1;
    vector<data> hoge;
    rep(i,n){
        data a;
        cin>>a.y>>a.m>>a.d;
        hoge.push_back(a);
    }
    rep(i,hoge.size()){
        data a;
        int ans=0;
        a.y=hoge[i].y-1;
        a.m=hoge[i].m-1;
        a.d=hoge[i].d-1;
        ans+=a.y/3*20*10;
        ans+=(a.y-a.y/3)*(19*5+20*5);
        if(hoge[i].y%3==0){
            ans+=a.m*20;
            
        }
        else{
            ans+=a.m/2*19;
            ans+=(a.m-a.m/2)*20;
        }
        ans+=a.d;
        cout<<196470-ans<<endl;
    }
    return 0;
}
