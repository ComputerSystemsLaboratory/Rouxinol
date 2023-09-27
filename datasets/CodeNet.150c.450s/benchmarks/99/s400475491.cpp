#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        string s[2]; cin >> s[0] >> s[1];

        int n[2]= {0,0};
        for (int i = 0; i <2;i++ ) {
            char prev = '1';
            for (auto x : s[i]) {
                switch (x) {
                case 'm':
                    n[i] += (prev - '0')*1000;
                    prev = '1';
                    break;
                case 'c':
                    n[i] += (prev - '0')*100;
                    prev = '1';
                    break;
                case 'x':
                    n[i] += (prev - '0')*10;
                    prev = '1';
                    break;
                case 'i':
                    n[i] += (prev - '0')*1;
                    prev = '1';
                    break;
                default:
                    prev = x;
                    break;
                }
            }
        }

        n[0] += n[1];

        if (n[0] / 1000 >= 2) {
            cout << n[0]/1000;
        }
        if (n[0] / 1000 >= 1) {
            cout << 'm';
        }
        n[0] %= 1000;

        if (n[0] / 100 >= 2) {
            cout << n[0]/100;
        }
        if (n[0] / 100 >= 1) {
            cout << 'c';
        }
        n[0] %= 100;

        if (n[0] / 10 >= 2) {
            cout << n[0]/10;
        }
        if (n[0] / 10 >= 1) {
            cout << 'x';
        }
        n[0] %= 10;

        if (n[0] >= 2) {
            cout << n[0];
        }
        if (n[0] >= 1) {
            cout << 'i';
        }
        cout << endl;

    }
    return 0;
}