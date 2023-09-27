#include <algorithm>
#include <bitset>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <math.h>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>
using namespace std;

using ll = long long;
using ld = long double;
using Pii = pair<int, int>;
using Pil = pair<int, ll>;
using Pll = pair<ll, ll>;
using Pid = pair<int, ld>;
using Pis = pair<int, string>;
#define rep(i,n) for(int i=0; i<n; i++)
#define repm(i,s,n) for(int i=s; i<n; i++)

const int INF = 1 << 30;
const ll INF_L = 1LL << 60;
const int MOD = 998244353; // 1e9+7;


// ----------------------------------------------------------------
// String Functions
// ----------------------------------------------------------------
int ctoi(char c){
    if(isdigit(c)) return c - '0';
    else if(islower(c)) return c - 'a';
    else if(isupper(c)) return c - 'A';
    else return -1;
}
char itocd(int i){char c = i+'0'; if(isdigit(c)) return c; else return 0x00;}
char itocl(int i){char c = i+'a'; if(islower(c)) return c; else return 0x00;}
char itocu(int i){char c = i+'A'; if(isupper(c)) return c; else return 0x00;}
// ----------------------------------------------------------------


// ----------------------------------------------------------------
// Dynamical Programming
// ----------------------------------------------------------------
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// ----------------------------------------------------------------


// ----------------------------------------------------------------
// Graph Theory
// ----------------------------------------------------------------
vector<vector<int>> adjMat;
vector<set<Pii>> adjList;

void Dijkstra(){}
void BellmanFord(){}
void WarshallFloyd(){}
// ----------------------------------------------------------------


// ----------------------------------------------------------------
// Mathematical Functions
// ----------------------------------------------------------------
ll gcd(ll A, ll B) {if (A%B == 0) {return(B);} else {return(gcd(B, A%B));}}
ll lcm(ll A, ll B) {return A * B / gcd(A, B);}
ll divtimes(ll N, ll D) {ll res = 0; while(N%D == 0) {N/=D; res++;} return res;}

ll powMod(ll B, ll P) {
    if(P == 0) return 1;
    if(P%2 == 0){ll t = powMod(B, P/2); return t*t % MOD;}
    return B * powMod(B, P-1) % MOD;
}

/* ----------------------------------
 Factorial, Permutation, Combination
 ---------------------------------- */
const int FAC_INIT_SIZE = 3e3+9;
vector<ll> fac, finv, inv;

void factModInit() {
    fac.resize(FAC_INIT_SIZE);
    finv.resize(FAC_INIT_SIZE);
    inv.resize(FAC_INIT_SIZE);
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i=2; i < FAC_INIT_SIZE; i++){
        fac[i] = fac[i-1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;
    }
}
ll factMod(ll N){return fac[N] % MOD;}
ll factInvMod(ll N){return finv[N] % MOD;}
ll permMod(ll N, ll K){
    if (N < 0 || K < 0 || N < K) return 0;
    else return factMod(N) * factInvMod(N-K) % MOD;
}
ll combMod(ll N, ll K){
    if (N < 0 || K < 0 || N < K) return 0;
    else if (N < FAC_INIT_SIZE){ return factMod(N) * (factInvMod(K) * factInvMod(N-K) % MOD) % MOD;}
    else {
        ll ans = 1; ll Ks = K < N-K ? K : N-K;
        for (ll i=N; i > N-Ks; i--) {ans *= i; ans %= MOD;}
        return ans * factInvMod(Ks) % MOD;
    }
}

/* ----------------------------------
 Sieve of Eratosthenes
---------------------------------- */
vector<bool> isprime;
void sieveInit(int s){
    isprime.resize(s);
    isprime[0] = isprime[1] = false;
    isprime[2] = true;
    for(int i=3; i<s; i++) isprime[i] = i%2 != 0;
    for(int i=3; i<sqrt(s)+1; i+=2){
        if(isprime[i]) {int m = 3*i; while(m < s){isprime[m] = false; m += 2*i;}}
        else continue;
    }
}

struct primeFactor{
    ll number;
    map<ll, int> exponent;
};
primeFactor primeFactorInit(ll number){
    primeFactor pf;
    pf.number = number;
    for(int i=2; i<sqrt(pf.number)+1; i++){
        while(number%i == 0) {pf.exponent[i]++; number /= i;}
        if(number == 1) break;
    }
    if(number != 1) pf.exponent[number]++;
    return pf;
}
// ----------------------------------------------------------------


int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N, M; cin >> N >> M;
    vector<set<int>> setv(N);
    rep(i, M) {
        int A, B; cin >> A >> B; A--; B--;
        setv[A].insert(B);
        setv[B].insert(A);
    }
    
    queue<int> queue;
    queue.push(0);
    
    vector<int> res(N, -1);
    while(!queue.empty()){
        int v = queue.front();
        for(auto a : setv[v]){
            if(res[a] == -1) {queue.push(a); res[a] = v+1;}
        }
        queue.pop();
    }
    cout << "Yes" << endl;
    repm(i, 1, N) cout << res[i] << endl;
}
