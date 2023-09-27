#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int n, a[1010], min = 10000000;
    while (true) {
        cin >> n;
        if (n == 0) break;
        else {
            for (int i = 0; i < n; i++) cin >> a[i];
            sort(a, a + n);
            for (int i = 0; i < n - 1; i++) {
                if (a[i + 1] - a[i] < min) min = a[i + 1] - a[i];
            }
            cout << min << endl;
            min = 10000000;
        }
    } 
    return 0;
}

