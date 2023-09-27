#include <iostream>
#define MAX 100
#define int long long
using namespace std;

static const int INFTY = 1LL<<32;
int n, A[MAX][MAX];

void floyd(){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(A[i][k]==INFTY) continue;
            for(int j=0;j<n;j++){
                if(A[k][j]==INFTY) continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
}

signed main(){
    int e, a, b, d;
    cin >> n >> e;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) A[i][j] = 0;
            else A[i][j] = INFTY;
        }
    }

    for(int i=0;i<e;i++){
        cin >> a >> b >> d;
        A[a][b] = d;
    }

    floyd();

    bool negative = false;
    for(int i=0;i<n;i++){
        if(A[i][i]<0) negative = true;
    }
    if(negative){
        cout << "NEGATIVE CYCLE" << endl;
    } 
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j) cout << " ";
                if(A[i][j]==INFTY) cout << "INF";
                else cout << A[i][j];
            }
            cout << endl;
        }
    }

}
