#include<iostream>
using namespace std;
int main() {
    int i = 1;
    int a;
    while (1) {
        cin >> a;
        if (a==0) break;
        cout << "Case " << i << ": " << a << endl;
        i++;
    }
    return 0;
}
