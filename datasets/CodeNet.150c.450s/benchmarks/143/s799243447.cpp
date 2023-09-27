#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<map>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)



int main(){
    int n;
    cin>>n;
    int64_t sum=0;
    vector<int> amount(100005,0);
    rep(i,n){
        int a;
        cin>>a;
        sum+=a;
        amount[a]++;
    }
    int q;
    cin>>q;
    rep(i,q){
        int b,c;
        cin>>b>>c;
        sum+=(c-b)*amount[b];
        amount[c]+=amount[b];
        amount[b]=0;
        cout<<sum<<endl;
    }
}