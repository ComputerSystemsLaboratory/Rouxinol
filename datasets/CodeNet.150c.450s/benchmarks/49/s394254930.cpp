#include <iostream>
using namespace std;
int main() {
    int a,b;
    
    while(cin >> a && a>0) {
    
        int max = 0;
        int min = 1000;
        int sum = 0;
        
        
        for (int i = 0; i < a; ++i) {
            cin >> b;
            sum += b;
            
            if (b > max) max = b;
            if (b < min) min = b;
        }
        
        int avg = (sum - max - min) / (a-2);
        
        cout << avg << endl;
        
    }
}