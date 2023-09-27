#include <iostream>
using namespace std;

int main() {
    int n, x;
  
    while (1) {
        cin >> n >> x;
        
        if (n == 0 && x == 0) {
            return 0;
        }

        int c = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                if ((x-i-j <= n) && (j < x-i-j)) {
                    c++;
                }
            }
        }
        cout << c << endl;
    }  
}