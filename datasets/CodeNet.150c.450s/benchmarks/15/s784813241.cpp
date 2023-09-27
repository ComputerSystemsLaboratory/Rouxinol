#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

int search(int A[], int n, int key){
    int i = 0;
    A[n] = key;
    while ( A[i] != key) i++;
    return i != n;
}

int main() {
    int n, q, sum = 0;
    cin >> n;
    int V[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &V[i]);
    }
    int key = V[n];
    cin >> q;
    for (int i = 0; i < q; ++i) {
        scanf("%d", &key);
        if (search(V, n, key)) sum++;
    }
    cout << sum << "\n";

    return 0;
}
