#include <stdio.h>
#include <algorithm>
 
using namespace std;
 
int partition(int A[],int p,int r){
    int x = A[r];
    int i = p-1;
    for(int j = p; j < r; j++){
        if(A[j] <= x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}
 
int main(){
    int n,partition_point;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n; i++) scanf("%d",&A[i]);
 
    partition_point = partition(A,0,n-1);
 
    for(int i = 0; i < n-1; i++){
        if(i == partition_point){
            printf("[%d] ",A[i]);
        }else{
            printf("%d ",A[i]);
        }
    }
    if(partition_point == n-1){
        printf("[%d]\n",A[n-1]);
    }else{
        printf("%d\n",A[n-1]);
    }
}
