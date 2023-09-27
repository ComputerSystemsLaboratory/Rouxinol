#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

void Swap(int arr[], int x, int y){
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main(){

    int w, n;
    cin >> w >> n;
    vector<int> arr(w+1);

    for(int i=1; i<w+1; i++){
        arr[i] = i;
    }

    for(int m=0; m<n; m++){
        int a, b;
        scanf("%d,%d", &a, &b);

        Swap(arr.data(), a, b);
    }

    for(int i=1; i<w+1; i++){
        cout << arr[i] << endl;
    }


    return 0;
}