#include <iostream>
using namespace std;
 
int main(){
    int a, b;
    int price = 100000;

    cin >> a;
    for (int i = 0; i < a; i++) {
        price *= 1.05;
        b = price % 1000;
        if (b != 0) {
            price += 1000;
            price -= b;
        }
    }
    cout << price << endl;

    return 0;
}