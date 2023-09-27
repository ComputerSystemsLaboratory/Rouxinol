#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits>
#include <iomanip>
#include <vector>
#include <cstring>
#include <queue>
#include <map>
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
const int INF = 1e6;
using namespace std;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
template<class T> inline bool chmax(T &a,T& b){if(a < b){a = b; return true;} else return false;}
template<class T> inline bool chmin(T &a,T& b){if(a > b){a = b; return true;} else return false;}
int main(){
    int n,m,l;
    cin >> n >> m >> l;
    vector< vector< int > > matrix_A(n,vector<int>(m)),matrix_B(m,vector<int>(l));
    rep(i,n){
        rep(j,m){
            cin >> matrix_A[i][j];
        }
    }
    rep(i,m){
        rep(j,l){
            cin >> matrix_B[i][j];
        }
    }
    vector< vector<long> >matrix_ans(n,vector<long>(l));
    rep(i,n){
        rep(j,l){
            rep(k,m){
                matrix_ans[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }
    rep(i,n){
        rep(j,l){
            cout << matrix_ans[i][j] << (j == l-1 ? '\n' : ' ');
        }
    }
}
