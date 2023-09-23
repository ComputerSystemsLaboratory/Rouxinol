#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1) {
            cout << " ";
        }
    }
    cout << "\n";
}

void sort(int* arr, int size) {
    print_arr(arr, size);
    for (int i = 1; i < size; i++) {
        int v = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > v) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = v;
        print_arr(arr, size);
    }
}

int main() {

    int N = 0;
    cin >> N;
    int* arr = (int*)malloc(N * sizeof(int));

    int i = 0;
    while (i < N && scanf("%d", &arr[i]) == 1)
        i++;

    sort(arr, N);
    return 0;
}