#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr long long MOD = 1000000007;
void factorization(long long n,map<long long ,long long>& mp){
    for(long long i=2;i*i<=n;i++){
        while(n%i==0){
            mp[i]++;
            n /= i;
        }
     }
     if(!(n == 1)) mp[n]++;
}
int main(){
    ll n;
    cin >> n;
    map<ll,ll>mp;
    factorization(n, mp);
    cout << n << ":";
    for (auto i:mp){
        while(i.second){
            cout << " " << i.first;
            i.second--;
        }
    }
    cout << endl;
}
