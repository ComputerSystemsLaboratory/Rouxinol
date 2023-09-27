#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
int main(void){
    int n;
    cin>>n;
    vvi day={{0,20,19,20,19,20,19,20,19,20,19,},{0,20,20,20,20,20,20,20,20,20,20,}};
    partial_sum(all(day[0]),day[0].begin());
    partial_sum(all(day[1]),day[1].begin());
    auto f=[day](int y,int m,int d){int p=0;rep(i,y-1){p+=day[(i+1)%3==0][10];}p+=day[y%3==0][m-1]+d;return p;};
    rep(lp,n){
        int y,m,d; cin>>y>>m>>d;
        cout<<f(1000,1,1)-f(y,m,d)<<endl;
    }
}