#include <bits/stdc++.h>
using  namespace std;
typedef long long ll;
#define RAP(i, n) for(ll i=0;i<(n);i++)
#define FOR(i, a, b) for(ll i=(a);i<(b);i++)

#include <iostream>
#include <vector>
using namespace std;

//重複順列
vector<ll> buf;
void permutation(ll i, const ll size, const ll range_start, const ll range_end)
{
    if (i == size) {
      // ここで所望の作業を行う
      for(ll itr:buf){
        cout << itr;
      }
    }
    else{
        for(ll j = range_start; j <= range_end; ++j){
            buf[i] = j;
            permutation(i + 1, size, range_start, range_end);
        }
    }
}

int main(void)
{
   ll n, a, q, b, c, ans=0, changeB, changeC;
 unordered_map<ll, ll> mp;
 cin >> n;
 RAP(i,n){
   cin >> a;
   mp[a]++; 
 }
 cin >> q;
 for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ans += itr->first * itr->second;
   } 
 RAP(i, q){
   cin >> b >> c;
   changeB = b * mp[b];
   changeC = c * mp[b];
   ans = ans-changeB+changeC;
   mp[c] += mp[b];
   mp[b] = 0;
   cout << ans << endl;
 }
 
 return 0;
}
