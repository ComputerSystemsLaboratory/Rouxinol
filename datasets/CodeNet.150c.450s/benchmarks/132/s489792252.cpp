#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, P;
    while(true){
        scanf("%d%d", &N, &P);
        if(N == 0 && P == 0) break;
        int c[50], left = P;
        fill(c, c + N, 0);
        int turn = 0;
        while(true){
            if(left == 0){
                left += c[turn];
                c[turn] = 0;
            }else{
                --left;
                c[turn] += 1;
            }
            if(c[turn] == P){
                break;
            }
            turn = (turn + 1) % N;
        }
        printf("%d\n", turn);
    }
    return 0;
}