#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N; cin >> N;
    cout << N << ":";
    while(N != 1) {
        bool f = false;
        for(int i = 2; i * i <= N; i++) {
            if(N % i == 0) {
                cout << " " << i;
                N /= i;
                f = true;
                break;
            }
        }
        if(f == false) {
            cout << " " << N;
            break;
        }
    }
    cout << endl;
}