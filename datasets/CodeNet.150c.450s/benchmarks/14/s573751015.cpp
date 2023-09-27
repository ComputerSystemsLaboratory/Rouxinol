#include <iostream>
using namespace std;

int main(void) {
    int N, tmp;
    cin >> N;

    for(int i=1; i <= N; i++) {
        if(i % 3 == 0) {
            cout << " " << i;
            continue;
        }
        if(i % 10 == 3) {
            cout << " " << i;
            continue;
        }
        tmp = i;
        while(tmp / 10 != 0) {
            if(((tmp / 10) % 10) == 3) {
                cout << " " << i;
                break;
            }
            tmp /= 10;
        }
    }
    cout << endl;

    return 0;
}