#include <iostream>
#include <math.h>
using namespace std;


int main(void){
    while (1) {
        int n, r;
        cin >> n >> r;
        if (n == 0 && r == 0) return 0;
        
        int m[55];
        for (int i = 0; i < n; i++) m[n - 1 - i] = i;
        
        for (int i = 0; i < r; i++) {
            int p, c;
            cin >> p >> c;
            
            int tmp[55];
            for (int j = 0; j < p - 1; j++) tmp[j] = m[j];
            
            for (int j = 0; j < c; j++) m[j] = m[p - 1 + j];
            
            for (int j = 0; j < p - 1; j++) m[c + j] = tmp[j];
            
        }
        
        cout << m[0] + 1 << endl;
    }
}

