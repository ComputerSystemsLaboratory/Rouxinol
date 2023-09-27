#include <iostream>

using namespace std;

int selectionSort(int a[], int n) {
    int sw = 0;
    for (int i = 0; i < n; ++i) {
        int minj = i;
        for (int j = i; j < n; ++j) {
            if (a[j] < a[minj]) minj = j;
        }
        if (i != minj) {
            swap(a[i], a[minj]);
            sw++;
        }
    }
    return sw;
}

void trace(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int sw = selectionSort(a, n);
    trace(a, n);
    cout << sw << endl;
    return 0;
}