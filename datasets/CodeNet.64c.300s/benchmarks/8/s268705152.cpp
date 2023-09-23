#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool output_flag = false;
        if (i % 3 == 0) {
            output_flag = true;
        } else {
            int x = i;
            while (x) {
                if (x % 10  == 3) {
                    output_flag = true;
                    break;
                }
                x /= 10;
            }
        }
        if (output_flag) cout << " " << i;
    }
    cout << endl;
    return 0;
}