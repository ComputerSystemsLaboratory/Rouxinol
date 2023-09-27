#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD=1e9+7;

template<typename T> T gcd(T x,T y){return y!=0?gcd(y,x%y):x;}
template<typename T> T lcm(T x,T y){return x/gcd(x,y)*y;}
template<typename T> T extgcd(T a,T b,T &x,T &y){
    T d=a;
    if (b!=0){
        d=extgcd(b,a%b,y,x);
        y-=(a/b)*x;
    } else x=1,y=0;
    return d;
}
template<typename T> int digit(T n){
    string cnt=to_string(n);
    return cnt.size();
}

template<typename T> bool is_prime(T n){
    for (T i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return 1<n;
}
template<typename T> vector<T> divisor(T n){
    vector<T> res;
    for (T i=1;i*i<=n;++i) if (n%i==0){
        res.emplace_back(i);
        if (i!=n/i) res.emplace_back(n/i);
    }
    return res;
}
template<typename T> map<T,int> prime_factor(T n){
    map<T,int> res;
    for (T i=2;i*i<=n;++i){
        while (n%i==0){
            ++res[i]; n/=i;
        }
    }
    if (n!=1) res[n]=1;
    return res;
}
vector<bool> prime_table(int n){
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for (int i=2;i<=n;++i) if (prime[i]){
        for (int j=i+i;j<=n;j+=i) prime[j]=false;
    }
    return prime;
}
vector<int> primes(int n){
    vector<int> res;
    vector<bool> pt=prime_table(n);
    for (int i=2;i<=n;++i) if (pt[i]){
        res.emplace_back(i);
    }
    return res;
}

long long modpow(long long x,long long n,long long mod){
    long long res=1;
    while (n>0){
        if (n&1LL) res=res*x%mod;
        x=x*x%mod; n>>=1LL;
    }
    return res;
}
long long modinv(long long x,long long p){
    return modpow(x,p-2,p);
}

template<typename T>
T eular_phi(T n){
    T res=n;
    for (T i=2;i*i<=n;++i) if (n%i==0){
        res-=res/i;
        while (n%i==0) n/=i;
    }
    if (n!=1) res-=res/n;
    return res;
}
vector<int> eular_phi_table(int n){
    vector<int> eular(n+1);
    iota(eular.begin(),eular.end(),0);
    for (int i=2;i<=n;++i) if (eular[i]==i){
        for (int j=i;j<=n;j+=i) eular[j]-=eular[j]/i;
    }
    return eular;
};


// https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A

void NTL_1_A(){
    int n; cin >> n;
    map<int,int> ans=prime_factor(n);
    cout << n << ':';
    for (auto p:ans){
        for (int i=0;i<p.second;++i){
            cout << ' ' << p.first;
        }
    }
    cout << '\n';
}

// https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B

void NTL_1_B(){
    ll m,n; cin >> m >> n;
    cout << modpow(m,n,MOD) << '\n';
}

// https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C

void NTL_1_C(){
    int n; cin >> n;
    ll ans=1;
    for (;n--;){
        ll a; cin >> a;
        ans=lcm(ans,a);
    }
    cout << ans << '\n';
}

// https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D

void NTL_1_D(){
    int n; cin >> n;
    cout << eular_phi(n) << '\n';
}

// https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E

void NTL_1_E(){
    int a,b,x,y; cin >> a >> b;
    extgcd(a,b,x,y);
    cout << x << ' ' << y << '\n';
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    NTL_1_A();
}
