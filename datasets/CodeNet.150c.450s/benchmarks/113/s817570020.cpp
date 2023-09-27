#include    <iostream>

using namespace std;

int main() {
    int i = 0;
    while(1) {
        int k;

        cin >> k;
        if(k == 0) break;
        cout << "Case " << ++i << ": " << k << endl;
    }

    return 0;
}
