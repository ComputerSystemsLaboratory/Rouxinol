#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i <= (ll)(n); i++)
#define INF 10000000000
#define MOD 1000000007
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int N; cin>>N;
    map<string,int> M;
    rep(i,N){
        string tmp; cin>>tmp;
        M[tmp]++;
    }
    cout<<"AC x "<<M["AC"]<<endl;
    cout<<"WA x "<<M["WA"]<<endl;
    cout<<"TLE x "<<M["TLE"]<<endl;
    cout<<"RE x "<<M["RE"]<<endl;
}