#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
int temp, n;
/* main */
int partition(int A[],int p,int r){
    int x = A[r];
    int i = p-1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x){
            i++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    return i+1;
}

int main() {
    int q;
    cin >> n;
    int A[100000];
    for (int j = 0; j < n; ++j) {
        scanf("%d", &A[j]);
    }
    q = partition(A, 0, n-1);
    for (int k = 0; k < n; k++) {
        if(k) printf(" ");
        if (k == q) printf("[%d]", A[k]);
        else printf("%d", A[k]);
    }
    cout << "\n";
    return 0;
}
