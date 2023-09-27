#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    int H;
    cin >> H;
    int A[H+1];
    for (int i = 1; i < H+1; i++) scanf("%d", &A[i]);

    for (int i = 1; i < H+1; i++){
        printf("node %d: key = %d, ", i, A[i]);
        if (i/2 >= 1){
            printf("parent key = %d, ", A[i/2]);
        }
        if (2*i <= H){
            printf("left key = %d, ", A[2*i]);
        }
        if (2*i+1 <= H){
            printf("right key = %d, ", A[2*i+1]);
        }
        printf("\n");
    }
    return 0;
}

