#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define VMAX 10000
#define SENTINEL 2000000000
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int N;

int main(){
   int C[10001];
    for(int i = 0; i < 10001; i++) C[i] = 0;
    int n;
    scanf("%d",&n);
    int* A = new int[n];
    int* B = new int[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);
        C[A[i]]++;
    }

    for(int i = 0,j=0; i < 10001; i++){
        if(C[i] != 0){
            for(int k = 0; k < C[i]; k++){
                B[j++] = i;
            }
        }
    }

    for(int i = 0; i < n-1; i++) printf("%d ",B[i]);
    printf("%d\n",B[n-1]);
    delete[] A;
    delete[] B;
    return 0;
}

