#include <cstdio>
using namespace std;

int main(){
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j + 1 < 3 - i; j++){
            if(a[j] > a[j + 1]){
                int k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }

    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}