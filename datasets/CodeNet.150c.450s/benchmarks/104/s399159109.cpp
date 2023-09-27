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
int w, n;
vi va;

int main(){
    cin >> w >> n;
    rep(i, w)va.push_back(i + 1);
    rep(i, n){
        int a, b;
        scanf("%d, %d", &a, &b);
        a--; b--;
        swap(va[a], va[b]);
    }
    rep(i, w)cout << va[i] << endl;
}