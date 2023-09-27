#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int a, n[100], max;
    stack<int> mode;
    
    for (int i = 0; i < 100; i++) {
        n[i] = 0;
    }
    while (cin >> a) {
        n[a - 1]++;
    }
    max = n[99];
    mode.push(99);
    for (int i = 98; i >= 0; i--) {
        if (n[i] > max) {
            while (!mode.empty()) {
                mode.pop();
            }
            max = n[i];
            mode.push(i);
        } else if (n[i] == max) {
            mode.push(i);
        }
    }
    while (!mode.empty()) {
        cout << mode.top() + 1 << endl;
        mode.pop();
    }
    return 0;
}