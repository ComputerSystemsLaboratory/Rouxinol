#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
using namespace std;
#define INT(x) int x; scanf("%d",&x)
#define LL(x) ll x; scanf("%lld",&x)
#define INPUT(x) cin >> x
#define REP1(x,n) for(int x = 0; x < n; x++)
#define REP2(x,s,e) for(int x = s; x <= e; x++)
#define RREP1(x,n) for(int x = n-1; x >= 0; x--)
#define RREP2(x,s,e) for(int x = s; x >= e; x--)
#define BR printf("\n")
#define INF_INT 2147483647
#define INF_LL 9223372036854775807

typedef long long ll;

int main(){
    //?????????????????¨?????´??°???????????§???????????¢??????A[N][N]??????
    //???????????¢
    int A[100][100];
    
    //?????°
    INT(N);INT(E);
    
    //?????????
    REP1(i,N){
        REP1(j,N){
            if(i != j){
                A[i][j] = INF_INT;
            }else{
                A[i][j] = 0;
            }
        }
    }
    
    //??\???
    REP1(i,E){
        INT(s);INT(t);INT(d);
        //A^0??¨??????????????????
        A[s][t] = d;
        //A[t][s] = d;
    }
    
    REP1(k,N){
        REP1(i,N){
            if (A[i][k] == INF_INT) continue;
            REP1(j,N){
                if (A[k][j] == INF_INT) continue;
                A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
    
    REP1(i,N){
        if(A[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    
    REP1(i,N){
        REP1(j,N){
            if (A[i][j] == INF_INT) {
                cout << "INF";
            }else{
                cout << A[i][j];
            }
            if (j+1 != N)cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}