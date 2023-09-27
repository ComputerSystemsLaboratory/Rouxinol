#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)

// Bit Matrix
const int MAX_ROW = 210; // to be set appropriately
const int MAX_COL = 110; // to be set appropriately
struct BitMatrix {
    int H, W;
    bitset<MAX_COL> val[MAX_ROW];
    BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
    inline bitset<MAX_COL>& operator [] (int i) {return val[i];}
};

int GaussJordan(BitMatrix &A, bool is_extended = false) {
    int rank = 0;
    for (int col = 0; col < A.W; ++col) {
        if (is_extended && col == A.W - 1) break;
        int pivot = -1;
        for (int row = rank; row < A.H; ++row) {
            if (A[row][col]) {
                pivot = row;
                break;
            }
        }
        if (pivot == -1) continue;
        swap(A[pivot], A[rank]);
        for (int row = 0; row < A.H; ++row) {
            if (row != rank && A[row][col]) A[row] ^= A[rank];
        }
        ++rank;
    }
    return rank;
}


const int MD = 65;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  rep(ti,t){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    string s;
    cin >> s;
    BitMatrix A(n+1,MD+1);//1
    BitMatrix B(n+1,MD+1);//0
    rep(i,s.size()){
      rep(j,MD){
        A[i][j] = 0;
        B[i][j] = 0;
      }
    }
    int ans = 0;
    for(int i = s.size()-1;i>=0;i--){
      if(s[i]=='1'){
        ll cv = 0;
        rep(j,63){
          if((1LL<<j)&a[i]){
            if(((1LL<<j)&cv) == 0){
              rep(l,n){ // bs 可能?
                if(B[l][j]){
                  rep(k,63) {
                    if(B[l][k]){
                      cv ^= (1LL<<k);
                    }
                  }
                  break;
                }
                else if(l==n-1){
                  ans = 1;
                }
              }
            }
            cv ^= (1LL<<j);
          }
        }
        if(cv!=0) ans = 1;
      }
      else{
        rep(j,63){
          if(a[i] & (1LL<<j)) B[n][j] = 1;
        }
        GaussJordan(B, true);
      }
    }
      cout << ans << endl;


  }


  

  
  
  return 0;
    

}
