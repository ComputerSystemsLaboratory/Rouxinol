#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define repr(i,n) for(ll i=(n-1);i>=0;i--)
#define all(x) x.begin(),x.end()
#define br cout << "\n";
using namespace std;
const long long INF = 1e10;
const long long MOD = 1e9+7;
using Graph = vector<vector<ll>>;
using pll = pair<ll, ll>;
template<class T> inline bool chmin(T &a, T b) { if(a > b){ a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b) { if(a < b){ a = b; return true;} return false;}

// 0 false, 1 true 
// string to int : -48
// a to A : -32
// ceil(a)  1.2->2.0
// c++17	g++ -std=c++17 a.cpp

int main() {
    std::cout << std::fixed << std::setprecision(15);
    
    while(true){
        ll h; cin >> h;
        if(h == 0){
            break;
        }else{
            vector<vector<ll>> stone(h, vector<ll>(5));
            rep(i, h){
                rep(j, 5){
                    cin >> stone[i][j];
                }
            }
            ll score = 0;

            while(true){
                ll tmp = score;
                //スコアの計算
                rep(i, h){
                    ll num = 0; ll num_s = -1;
                    rep(j, 5){
                        if(j == 0){
                            num = stone[i][j]; num_s = 0; continue;
                        }

                        if(stone[i][j] == num){
                            if(j == 4){
                                if(j - num_s >= 2){
                                    for(ll k = num_s; k <= j; k++){
                                        score += num; stone[i][k] = 0;
                                    }
                                }
                            }
                        }else{
                            if(j - 1 - num_s >= 2){
                                for(ll k = num_s; k < j; k++){
                                    score += num; stone[i][k] = 0;
                                }
                            }
                            num = stone[i][j]; num_s = j;
                        }
                    }
                }

                //降ろす
                rep(j, 5){
                    for(ll i = h-1; i >= 0; i--){
                        for(ll k = i-1; k >= 0; k--){
                            if(stone[i][j] == 0){
                                swap(stone[i][j], stone[k][j]);
                            }
                        }
                    }
                }

                if(tmp == score){
                    break;
                }
            }
            
            /*
            //テスト用出力
            rep(i, h){
                rep(j, 5){
                    cout << stone[i][j] << " ";
                }
                br;
            }
            */
            cout << score << endl;

        }
    }

}
