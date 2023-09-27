#include <iostream>
using namespace std;

int main(void) {
    int a, b, sum, count;
    
    while(cin >> a >> b) {
        sum = a + b;
        count = 0;
        while(sum != 0) {
            sum /= 10;
            count++;
        }
        cout << count << endl;
    }
}
