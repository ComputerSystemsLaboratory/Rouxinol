#include <cstdio>
#include <cmath>
 
using namespace std;
 
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            printf(" %d", i);
            continue;
        }
        for(int j = 0; i / (int)pow(10, j) > 0; j++){
            if(i / (int)pow(10, j) % 10 == 3){
                printf(" %d", i);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}