#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    while (cin >> a >> b) {
        int digit = 1;
        int sum = a + b;
        while (true) {
            if (sum / 10 != 0) {
                digit += 1;
                sum /= 10;
            }
 
            else if (sum / 10 == 0 ) {
                break;
            }
        }
        cout << digit << endl;
    }

    return 0;
}