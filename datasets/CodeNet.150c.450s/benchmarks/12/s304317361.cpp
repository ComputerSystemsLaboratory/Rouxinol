#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int H,A[252];
    scanf("%d",&H);
    
    for(int i = 1; i <= H; i++) scanf("%d",&A[i]);
    
    for(int i = 1; i <= H; i++){
        printf("node %d: ",i);
        printf("key = %d, ", A[i]);
        if( i / 2 != 0) printf("parent key = %d, ",A[i / 2]);
        if( 2 * i <= H) printf("left key = %d, ", A[2 * i]);
        if( 2 * i + 1 <= H) printf("right key = %d, ",A[2 * i + 1]);
        cout << endl;
    }
    
    return 0;
}
