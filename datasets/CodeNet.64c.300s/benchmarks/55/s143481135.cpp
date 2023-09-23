#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (true) {
        int a;
        cin >> a;
        if (a != 0) {
            cout << "Case " << i << ": " << a << endl;
            i++;
        }else{
            break;
        }
    }
    return 0;
}
