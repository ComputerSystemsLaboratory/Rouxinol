#include <bits/stdc++.h>
#define rep(i, n) for(int (i) = 0; (i) < (int)(n); ++(i))
#define rep1(i, n) for(int (i) = 1; (i) <= (int)(n); ++(i))
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<double>> vvd;
// typedef pair<int, int> P;
const ll divisor = 1000000007;

const int MAX_L = 150;
int sq(int h, int w){ return h * h + w * w; }

int main(){
  while(true){
    int h, w;
    cin >> h >> w;
    if(h * w == 0) break;

    int orgd = sq(h, w);
    int ansd = 0x7fffffff;
    int ansh = MAX_L, answ = MAX_L;
    rep1(i, MAX_L){ // h
      rep1(j, MAX_L){ // w
        if(j <= i) continue;

        int tmpd = sq(i, j);
        if((tmpd == orgd && i > h) || tmpd > orgd){
          if(tmpd < ansd){
            ansd = tmpd;
            ansh = i; answ = j;
          }
        }
      }
    }
    cout << ansh << " " << answ << endl;
  }
  return 0;
}