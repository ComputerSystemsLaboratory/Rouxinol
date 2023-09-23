#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

/* ?????????????????°???????´? */
void trace(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++ ) {
        if(i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
}

int selectionSort(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        int min = i;
        for(int j = i + 1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[min],arr[i]);
            count++;
        }

    }
    return count;
}





int main(){
    int n;
    int arr[110];
    cin>>n;
    for (int i = 0; i < n;i++) {
        cin>>arr[i];
    }

    int count = selectionSort(arr,n);
    trace(arr,n);
    cout<<count<<endl;
}