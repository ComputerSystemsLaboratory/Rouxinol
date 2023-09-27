#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n, idx = 0;
    int arr[250];
    scanf("%d", &n);
    while(n--){
        scanf("%d", &arr[idx]);
        idx++;
    }
    for(int i = 1; i <= idx; i++){
        printf("node %d: ", i);
        printf("key = %d, ", arr[i-1]);
        if(i != 1){
            printf("parent key = %d, ", arr[i/2-1]);
        }
        if((2*i) <= idx){
            printf("left key = %d, ", arr[2*i-1]);
        }
        if((2*i+1) <= idx){
            printf("right key = %d, ", arr[2*i+1-1]);
        }
        printf("\n");
    }
}

