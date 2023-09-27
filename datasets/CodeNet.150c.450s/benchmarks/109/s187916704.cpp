#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, h, m, s, start, stop;
    while (true) {
        cin >> n;
        int table[60*60*24] = {};
        if (n == 0) {
            break;
        }
        for (int i=0; i<n; i++) {
            scanf("%d:%d:%d", &h, &m, &s);
            start = 3600*h+60*m+s;
            scanf("%d:%d:%d", &h, &m, &s);
            stop = 3600*h+60*m+s;
            for (int t=start; t<stop; t++) {
                table[t]++;
            }
        }
        int most_trains = 0;
        for (int t=0; t<60*60*24; t++) {
            if (table[t] > most_trains) {
                most_trains = table[t];
            }
        }
        cout << most_trains << endl;
    }
    return 0;
}