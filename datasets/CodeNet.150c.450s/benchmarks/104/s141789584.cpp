#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int i, w, n;
    int a, b;
    int ami[40];

    cin >> w >> n;
    for (i=0; i<w; i++) ami[i] = i+1;
    for (i=0; i<n; i++) {
        scanf("%d,%d\n", &a, &b);
        swap(ami[a-1], ami[b-1]);
    }
    for (i=0; i<w; i++) cout << ami[i] << endl;
    return 0;
}