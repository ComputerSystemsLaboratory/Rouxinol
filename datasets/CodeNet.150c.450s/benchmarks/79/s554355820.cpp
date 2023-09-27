//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1129&lang=jp
//

#include <iostream>
#define rep(i,n) for(int (i) =0;(i) < (n);(i)++)
using namespace std;

void show(int *a,int x){
    for(int i =0;i<x;i++){
        cout << a[i] << endl;
    }
}
int main() {
    int N,R;
    int A[2][55];
    int p,c;
    while(cin >> N >> R && N) {
        for(int i=0; i<N; ++i){
            A[0][i] = N - i;
            
        }
        int now = 0;
        int next = 1;
        rep(i,R){
            cin >> p >> c;
            rep(j,c){
                A[next][j] = A[now][p-1+j];
            
            }
            for(int j=p-1+c; j<N; j++){
                A[next][j] = A[now][j];
            
            }
            for(int j=0; j<p-1; ++j){
                A[next][c+j] = A[now][j];
            }
            int temp = now;
            now = next;
            next = temp;
            
            
        }
        cout << A[now][0] << endl;
        
    }
    
    return 0;
}