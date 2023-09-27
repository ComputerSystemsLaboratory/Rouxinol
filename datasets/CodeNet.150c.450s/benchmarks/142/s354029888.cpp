#include <iostream>
using namespace std;
int a[200006];
int main () {
    int N, K;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        cin >> a[i];
    }
    for (int i=0; i<N-K; i++) {
        if (a[i]<a[i+K]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}