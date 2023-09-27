#include <bits/stdc++.h>
using namespace std;

long long basis[64][2];
long long A[205];
char S[205];
int basisSize[2] = {0, 0};

bool insertVector(long long mask, int mode, bool testing = false){
    for(int i = 61; i >= 0; i --){
        if((mask&(1LL<<i)) == 0){continue;}
        if(!basis[i][mode]){
            if(testing){return true;}
            basis[i][mode] = mask;
            basisSize[mode] ++;
            return true;
        }
        mask ^= basis[i][mode];
    }
    return false;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t --){
        int n;
        scanf("%d", &n);

        memset(A, 0, sizeof(A));
        memset(basis, 0, sizeof(basis));
        memset(basisSize, 0, sizeof(basisSize));

        for(int i = 0; i < n; i ++){
            scanf("%lld", &A[i]);
        }

        scanf(" %s", S);

        int winner = 0;
        for(int i = n-1; i >= 0; i --){
            bool temp = insertVector(A[i], 0, false);
            if(temp == true && S[i] == '1'){
                winner = 1;
                break;
            }
        }

        printf("%d\n", winner);
    }
    return 0;
}
