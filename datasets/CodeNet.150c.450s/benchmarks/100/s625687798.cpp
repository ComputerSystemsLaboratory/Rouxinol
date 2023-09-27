#include <iostream>
using namespace std;

int main(void){
    long n, x;
    cin >> n;
    x = 1;
    while(n != 1){
        x *= n;
        n--;
    }
    cout << x << endl;

    return 0;
}

