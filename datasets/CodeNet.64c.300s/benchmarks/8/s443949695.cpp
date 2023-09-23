#include <iostream>

using namespace std;

int main() {
    int i, n, x;
    cin >> n;
    for(i=1;i<=n;i++){
        x = i;
        if(x % 3 == 0)
            cout << " " << i;
        else  {
            while(x >= 10 | x == 3) {
                if(x % 10 == 3) {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;
}