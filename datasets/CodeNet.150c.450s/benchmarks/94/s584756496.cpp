#include <iostream>

using namespace std;

int bubbleSort(int a[], int n) {
    bool flag = true;
    int sw = 0;
    while (flag) {
        flag = false;
        for (int j = n - 1; j > 0; --j) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                flag = true;
                sw++;
            }
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
    int sw = bubbleSort(a, n);
    trace(a, n);
    cout << sw << endl;
    return 0;
}