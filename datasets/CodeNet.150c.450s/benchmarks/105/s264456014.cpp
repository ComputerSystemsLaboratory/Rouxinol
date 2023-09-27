#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>0;i--)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
typedef vector<vec> mat;
const int MAX_ROW = 510; // to be set appropriately
const int MAX_COL = 510; // to be set appropriately
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

int linear_equation(BitMatrix A, vector<int> b, vector<int> &res) {
    int m = A.H, n = A.W;
    BitMatrix M(m, n + 1);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) M[i][j] = A[i][j];
        M[i][n] = b[i];
    }
    int rank = GaussJordan(M, true);

    // check if it has no solution
    for (int row = rank; row < m; ++row) if (M[row][n]) return -1;

    // answer
    res.assign(n, 0);
    for (int i = 0; i < rank; ++i) res[i] = M[i][n];
    return rank;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    rep(test,t){
        int n;
        cin>>n;
        vec A(n),B;
        rep(i,n) cin>>A[i];
        string s;
        cin>>s;
        reverse(all(A));
        reverse(all(s));
        int z=0;
        rep(i,n){
            if(s[i]=='0') B.push_back(A[i]);
            else{
                vector<int> D(70,0),ans;
                ll p=A[i];
                for(int j=0;p>0;j++){
                    D[j]=p%2;
                    p/=2;
                }
                BitMatrix C(70,B.size());
                rep(j,B.size()){
                    ll p=B[j];
                    for(int k=0;p>0;k++){
                        C[k][j]=p%2;
                        p/=2;
                    }
                    
                }
                if(linear_equation(C,D,ans)==-1) z=1;
            }
        }
        cout<<z<<"\n";
    }
}