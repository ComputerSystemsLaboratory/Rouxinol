#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

//??\???????????????
//4
//1 2 2 4
//2 1 4
//3 0
//4 1 3

bool Path[101][101] = {false};

int main(){
    int  N;
    cin >> N;
    int bb;
    for (int i = 1; i <= N; i++) {
        int K;
        scanf("%d %d",&bb,&K);
        for (int k = 0; k < K; k++) {
            int p;
            scanf("%d",&p);
            
            Path[i][p] = true;
        }
    }
    
    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= N; c++) {
            printf("%d",Path[r][c]);
            if (c != N) printf(" ");
        }
        printf("\n");
    }
    return 0;
}