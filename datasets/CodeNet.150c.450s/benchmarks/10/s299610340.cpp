#include <cstdio>
using namespace std;

int main(){
    int num[4][3][10]{};
    int n, b, f, r, v;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &b, &f, &r, &v);
        num[b - 1][f - 1][r - 1] += v;
    }

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 10; ++k){
                printf(" %d", num[i][j][k]);
            }
            printf("\n");
        }
        if(i != 3) printf("####################\n");
    }
    return 0;
}