#include <iostream>
using namespace std;
 
 
int main() {
    int cach;
    int n, x;
    while (true){
        cach = 0;
        cin >> n >> x;
        if (n == 0 && x == 0) break; 
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    if (i + j + k == x) cach++;
                }
            }
        }
        cout << cach << endl;
    }
    return 0;
}