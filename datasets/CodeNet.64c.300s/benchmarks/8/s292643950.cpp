#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++){
        if (i % 3 == 0 || i % 10 == 3) {
            cout << " " << i;
        } else {
            int x = i;
            do {
                x /= 10;
                if (x == 3 || x%10 == 3) {
                    cout << " " << i;
                    break;
                }
            } while (x > 10);
        }
    }
    cout << endl;
    return 0;
}