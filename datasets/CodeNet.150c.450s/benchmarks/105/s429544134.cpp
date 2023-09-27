#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

//template
#define rep(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define ALL(v) (v).begin(),(v).end()
typedef long long int ll;
const int inf = 0x3fffffff; const ll INF = 0x1fffffffffffffff; const double eps=1e-12;
template<typename T>inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<typename T>inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
//end

const int MAX_ROW = 110000; // to be set appropriately
const int MAX_COL = 60; // to be set appropriately
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
int main(){
   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      vector<ll> a(n);
      rep(i,0,n)cin>>a[i];
      string s; cin>>s;
      vector<ll> b;
      for(int i=n-1;i>=0;i--){
         if(s[i]=='0')b.push_back(a[i]);
         else{
            BitMatrix mat(b.size(),60);
            rep(j,0,b.size())rep(d,0,60)mat[j][d]=(b[j]>>d&1);
            GaussJordan(mat);
            ll cur=a[i];
            for(int d=59;d>=0;d--)if(cur>>d&1){
               int idx=-1;
               rep(j,0,b.size())if(mat[j][d])idx=j;
               if(idx==-1){
                  puts("1"); goto fail;
               }
               ll add=0;
               rep(j,0,60)if(mat[idx][j])add|=(1LL<<j);
               cur^=add;
            }
            if(cur!=0){
               puts("1"); goto fail;
            }
         }
      }
      puts("0");
      fail:;
   }
   return 0;
}