#include <iostream>
using namespace std;

int main() {
    do {
        int n, x;
        int temp = 0;
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        for (int a = 1; a<=n; a++){
            for (int b = (a+1); b<=n; b++){
                for (int c = (b+1); c<=n; c++){
                    int sum = a + b + c;
                    if (sum == x) temp++;
                }
            }
        }
        cout << temp << endl;

    } while(1);

    return 0;
}