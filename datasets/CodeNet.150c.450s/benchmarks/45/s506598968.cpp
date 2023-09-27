#include <iostream>

using namespace std;

typedef long long ll;
const ll mod = 1000000007LL;

template<typename T>
T pow(T x, T e){
    T res = 1;
    for(; e>0; e>>=1, (x*=x)%=mod)if(e & 1)(res *= x) %= mod;
    return res;
}

int main(){
    ll n, m;
    cin >> m >> n;
    cout << pow(m, n) << '\n';
    return 0;
}