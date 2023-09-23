#include<iostream>
using namespace std;
int main() {
    int n,i=0;
    cin >> n;
    while (++i <= n) {
            int x = i;
            if (i % 3 == 0)cout << " " << i;
            else{
                while (x != 0) {
                    if (x % 10 == 3) {
                        cout << " " << i;
                        break;
                    }
                    x /= 10;
                }
            }    
    }
    cout << endl;
    return 0;
}