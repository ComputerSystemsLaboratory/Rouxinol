#include <iostream>

using namespace std;

int main() {
    int min;
    int max_delta = -999999999;
    int n, i;

    cin >> n;

    int input[n];
    for (i = 0; i < n; i++) {
          cin >> input[i];
    }

    for (i = 0; i < n; i++) {
        if (i == 0) {
            min = input[i];
        } else {
        
            if (max_delta < input[i] - min) {
              max_delta = input[i] - min;
            }
            if (min > input[i]) {
                min = input[i];
            }
        }
        
    }
    cout << max_delta << endl;

    return 0;
}
