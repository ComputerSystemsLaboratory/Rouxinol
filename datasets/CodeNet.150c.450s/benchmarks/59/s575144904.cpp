#include <iostream>
#include <algorithm>

using namespace std;

void rotate(int xs[], int s, int t){
    int v = xs[t];
    for(int i = t; i > s; i--){
        xs[i] = xs[i-1];
    }
    xs[s] = v;
    return;
}

void insert(int xs[], int idx){
    for(int i = 0; i < idx; i++){
        if(xs[i] > xs[idx]){
            rotate(xs, i, idx);

        }
    }
}

void printArr(int xs[], int arr_len){
    for(int j = 0; j < arr_len-1; j++){
        cout << xs[j] << ' ';
    }
    cout << xs[arr_len-1] << '\n';
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        insert(arr, i);
        printArr(arr, n);
    }
    return 0;
}