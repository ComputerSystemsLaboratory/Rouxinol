#include <iostream>
//#define int long long
#define SIZE 21
#define VALUE 50001
const int infty = 99999;
//#define _DEBUG
using namespace std;
int N, M, Cs[SIZE], T[SIZE][VALUE];
int solve(){
    for(int i=0; i<=M; i++){
        for(int n=0; n<=N; n++){
            if(n==0){
                T[i][n] = 0;
            }else if(i==0){
                T[i][n] = infty;
            }else if(n<Cs[i-1]){
                T[i][n] = T[i-1][n]; 
            }else{
                T[i][n] = min(T[i-1][n], T[i][n-Cs[i-1]]+1);
            }
        }
    }
#ifdef _DEBUG
    for(int i=0; i<=M; i++){
        if(i>0)cout << Cs[i-1] << "\t";
        else cout << "i\\n\t";
        for(int n=0; n<=N; n++){
            cout << T[i][n] << "\t";
        }cout << endl;
    }
#endif
    return T[M][N];
}
signed main(){
    while(cin >> N >> M){
        for(int i=0; i<M; i++){
            cin >> Cs[i];
        }
        cout << solve() << endl;
    }
}
