#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++) 
#define rep(i, a) loop(i, 0, a)
using namespace std;
const int MOD = 1000000007;
const int inf = 1e8;
using vi = vector <int>;
using vvi = vector <vi>;
using vc = vector <char>;
using vvc = vector <vc>;
using vs = vector <string>;
using vvs = vector <vs>;
//g++ -std==c++14
//setprecision(10)
int n, ans;

int main(){
    while(cin >> n){
        ans = 0;
        rep(i, 10)rep(j, 10)rep(k, 10)rep(l, 10)if(i + j + k + l == n)ans++;
        cout << ans << endl;
    }
}