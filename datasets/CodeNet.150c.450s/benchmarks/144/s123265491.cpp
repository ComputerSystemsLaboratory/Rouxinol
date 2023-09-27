#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        int A[100][100], B[100][100];
        long long ans[100][100] = {0};
        rep(i,a){
            rep(j,b){
                cin >> A[i][j];
            }
        }
        rep(i,b){
            rep(j,c){
                cin >> B[i][j];
            }
        }
        rep(i,a){
            rep(j,c){
                rep(k,b){
                   ans[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        rep(i,a){
            rep(j,c){
                if(j) cout << ' ';
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
}