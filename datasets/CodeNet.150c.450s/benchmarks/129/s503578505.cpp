#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int a, A[101] = {0};
    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            cin >> a;
            A[j] += a;
            sum += a;
            cout << a << " ";
        }
        cout << sum << endl;
    }
    int sum = 0;
    for(int i = 0; i < c; i++){
        sum += A[i];
        cout << A[i] << " ";
    }
    cout << sum << endl;
    return 0;
}
