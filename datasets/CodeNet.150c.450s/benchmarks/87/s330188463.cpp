#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> mt;

ll h;
mt f;


int main(){
  while(cin >> h){
    if(h == 0) return 0;
    f = mt(h+1,vl(6));
    ll ans = 0;
    for(ll i = 1;i <= h;i++){
      for(ll j = 0;j < 5;j++) cin >> f[i][j];
    }
    bool flag;
    do{
      flag = false;
      for(ll i = 1;i <= h;i++){
        ll cnt = 0;
        ll prev = 0;
        for(ll j = 0;j <= 5;j++){
          if(f[i][j] == prev) cnt++;
          else{
            if(cnt >= 3 && prev != 0){
              flag = true;
              // cerr << cnt << " " << prev << " " << j << " " << i << endl;
              for(ll k = j-1,l = 0;l < cnt;l++,k--){
                ans += f[i][k];
                f[i][k] = 0;

              }
            }
            prev = f[i][j];
            cnt = 1;
          }
        }
      }
      for(ll s = 0;s <= h+5;s++){
        for(ll i = h;i > 0;i--){
          for(ll j = 0;j < 5;j++){
            if(f[i][j] == 0) swap(f[i][j],f[i-1][j]);
          }
        }
      }
      // for(ll i = 1;i <= h;i++){
      //   for(ll j = 0;j < 5;j++){
      //     cerr << f[i][j] << " ";
      //   }
      //   cerr << endl;
      // }

    }while(flag);

    cout << ans << endl;

  }
}

