#include <stdio.h>

const static int MAX = 100;

void print(int *array, int n){
    for(int i=0;i<n;i++){
        printf("%d", array[i]);
        if(i<n-1) printf(" ");
    }
    printf("\n");
}

int bubble_sort(int *array, int n){
    bool flag = true;
    int k, count=0;
    while(flag){
        flag = false;
        for(int i=n-1;i>0;i--){
            if(array[i] < array[i-1]){
                k = array[i-1];
                array[i-1] = array[i];
                array[i] = k;
                flag = true;
                count++;
            }
        }
    }
    print(array, n);
    return count;
}

int main(){
    int n, array[MAX], c;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    c = bubble_sort(array, n);
    printf("%d\n", c);
    return 0;
}
