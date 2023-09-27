#include <iostream>
using namespace std;
  

int combination(int m, int n, int a, int x) {
    if (a <= 1) {
        if (m <= x && x <= n) {
            return 1;
        } else {
            return 0;
        }
    }
 
    int c = 0;
    for (int i = m; (i <= n) && (i <= x); i++) {
        c = c + combination( i+1, n, a-1, x-i);
    }
    return c;
}



int main() {
    int n, x;
   
    while (1) {
        cin >> n >> x;
         
        if (n == 0 && x == 0) {
            return 0;
        } else {
            cout << combination( 1, n, 3, x) << endl;
        }
    }   
}