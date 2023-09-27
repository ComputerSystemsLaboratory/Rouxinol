#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int r, c, sum, total_sum;
    total_sum = 0;
    scanf("%d %d\n", &r, &c);
    int sh[r+1][c+1];
    for(int i = 0; i < r+1; i++){
        for(int j = 0; i < c+1; i++){
           sh[i][j] = 0;
        }
    }
    for(int i = 0; i < r; i++){
        sum = 0;
        for(int j = 0; j < c; j++){
            scanf("%d", &sh[i][j]);
            sum += sh[i][j];
        }
        sh[i][c] = sum;
        total_sum += sum;
    }
    sh[r][c] = total_sum;
    for(int i = 0; i < c; i++){
        sum = 0;
        for(int j = 0; j < r; j++){
            sum += sh[j][i];
        }
        sh[r][i] = sum;
    }
    for(int i = 0; i < r+1; i++){
        for(int j = 0; j < c+1; j++){
            if(j == c) printf("%d\n", sh[i][j]);
            else printf("%d ", sh[i][j]);
        }
    }
    return 0;
}
