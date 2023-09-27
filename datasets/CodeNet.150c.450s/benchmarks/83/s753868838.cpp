#include <iostream>
//#define int long long
#define SIZE 101
#define VALUE 10001
//#define _DEBUG
using namespace std;
int N, W, Vs[SIZE], Ws[SIZE] , T[SIZE][VALUE];
int solve(){
    for(int i=0; i<=N; i++){
        for(int w=0; w<=W; w++){
            if(i==0 || w==0){
                T[i][w] = 0;
            }else if(w<Ws[i-1]){
                T[i][w] = T[i-1][w];
            }else{
                T[i][w] = max(T[i-1][w], T[i-1][w-Ws[i-1]]+Vs[i-1]);
            }
        }
    }
#ifdef _DEBUG
    for(int i=0; i<=N; i++){
        cout << Vs[i] << "," << Ws[i] << "\t";
        for(int w=0; w<=W; w++){
            cout << T[i][w] << " ";
        }cout << endl;
    }
#endif
    return T[N][W];
}
signed main(){
    while(cin >> N >> W){
        for(int i=0; i<N; i++){
            cin >> Vs[i] >> Ws[i];
        }
        cout << solve() << endl;
    }
}
