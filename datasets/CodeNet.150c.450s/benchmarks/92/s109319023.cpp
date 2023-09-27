#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    int sum;
    
    while(cin >> a >> b) {     //この条件文は重要！！
        sum = a + b;
        
        for(int i = 0; i < 7; ++i) {
            sum /= 10;
            if(sum == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
