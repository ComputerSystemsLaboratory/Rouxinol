#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define pb push_back
const int maxn = 10000;
const int INF32 = 1'050'000'000;
const long long INF64 = 4'000'000'000'000'000'000;
const int MOD7 = 1'000'000'007;
const int MOD9 = 1'000'000'009;
const int mod = MOD7;

void ERROR(int num) { cout << "ERROR" << num << endl; }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
int dx[8]={-1,0,1,0,1,1,-1,-1};
int dy[8]={0,-1,0,1,1,-1,1,-1};


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    ll N;
    cin >> N;
    vector<ll> A(N);
    map<ll,ll> Map;
    ll sum = 0;
    rep(i,N){ 
        cin >> A[i];
        Map[A[i]]++;
        sum += A[i];
    }

    ll Q;
    cin >> Q;
    rep(i,Q){
        ll B, C;
        cin >> B >> C;
        ll num = Map[B];
        Map[B] = 0;
        Map[C] += num;
        sum += num * (C-B);
        cout << sum << endl;
    }

}