#include <iostream>
using namespace std;

int main(void) {
        int a[3];
        int res, count = 0;

        for(int i = 0; i < 3; i++) {
                cin >> a[i];
        }
        
        for(int i = 1; i <= a[2]; i++) {
                res = a[2] % i;
                if(res == 0 && a[0] <= i && a[1] >= i) {
                        count++;
                }
        }

        cout << count << endl;
        
        return 0;
}