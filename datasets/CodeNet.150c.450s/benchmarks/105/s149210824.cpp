#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> iint;
typedef pair<ll,ll> llll;
#define ALL(x) (x).begin(),(x).end()
const ll zero = 0;
const ll one = 1;
const ll INF = 9223372036854775807; //10^18
const int inINF = 2147483647; //10^9
const ll MOD = 1000000007; //10^9+7
const ll MOD2 = 998244353;
void Yes() {printf("Yes\n");}
void No() {printf("No\n");}
void YES() {printf("YES\n");}
void NO() {printf("NO\n");}

// vを上三角化する
void make(vector<ll> &v){
    int ind = 0;
    int sz = v.size();
    bool check;
    for (int i = 62; i >= 0; i--) {
        if(ind == sz) break;
        check = true;
        if(!(v[ind] & 1LL<<i)){
            check = false;
            for (int j = ind+1; j < sz; j++) {
                if(v[j] & 1LL<<i){
                    swap(v[ind], v[j]);
                    check = true;
                    break;
                }
            }
        }
        if(!check) continue;
        for (int j = 0; j < sz; j++) {
            if(j == ind) continue;
            if(v[j] & 1LL<<i){
                v[j] = v[j] ^ v[ind];
            }
        }
        ind++;
    }
}

// 上三角化されたvでaが作れるか判定する
bool ok(vector<ll> &v, ll a){
    ll tmp = a;
    int ind = 0;
    int sz = v.size();
    for (ll i = 62; i >= 0; i--) {
        if(ind == sz) break;
        if(!(v[ind] & 1LL<<i)) continue;
        if(tmp & 1LL<<i){
            tmp = v[ind] ^ tmp;
        }
        ind++;
    }
    return tmp == 0;
}

void solve(){
    int N;
    cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }
    string S; cin >> S;
    vector<ll> v;
    
    bool check = true;
    for (int i = N-1; i >= 0; i--) {
        if(S[i] == '1'){
            if(!ok(v, A[i])){
                check = false;
            }
        }
        else{
            v.push_back(A[i]);
            make(v);
        }
    }
    if(check){
        printf("%d\n", 0);
    }
    else{
        printf("%d\n", 1);
    }
}

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
    }
}