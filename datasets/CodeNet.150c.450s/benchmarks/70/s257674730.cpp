#include <iostream>
#include <string>

using namespace std;

int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void) {
    int M, D;
    while(1) {
        int elapsed = 0;
        cin >> M >> D;

        if(M == 0 && D == 0) break;

        for(int i = 1; i < M; i++) elapsed += days[i];

        elapsed += D;

        int t = elapsed % 7;

        if(t == 1) {
            cout << "Thursday" << endl;
        } else if(t == 2) {
            cout << "Friday" << endl;
        } else if(t == 3) {
            cout << "Saturday" << endl;
        } else if(t == 4) {
            cout << "Sunday" << endl;
        } else if(t == 5) {
            cout << "Monday" << endl;
        } else if(t == 6) {
            cout << "Tuesday" << endl;
        } else {
            cout << "Wednesday" << endl;
        }
    }
    return 0;
}