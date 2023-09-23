#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    double A[2][3];
    while(cin >> A[0][0] >> A[0][1] >> A[0][2] >> A[1][0] >> A[1][1] >> A[1][2]){
        for(int i = 1; i < 3; i++){
            A[0][i] /= A[0][0];
        }
        A[0][0] /= A[0][0];
        for(int i = 1; i < 3; i++){
            A[1][i] -= A[0][i] * A[1][0];
        }
        A[1][0] -= A[0][0] * A[1][0];
        for(int i = 0; i < 3; i++){
            if(i != 1)
                A[1][i] /= A[1][1];
        }
        A[1][1] /= A[1][1];
        for(int i = 0; i < 3; i++){
            if(i != 1)
                A[0][i] -= A[1][i] * A[0][1];
        }
        A[0][1] -= A[1][1] * A[0][1];
        
        printf("%.3f %.3f\n", A[0][2], A[1][2]);
    }
}

