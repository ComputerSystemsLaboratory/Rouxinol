#include <iostream>

#define MIDNIGHT 24*3600+1

using namespace std;

int read_time() {
    int h, m, s;
    cin >> h;
    cin.ignore(1);
    cin >> m;
    cin.ignore(1);
    cin >> s;
    cin.ignore(1);
    return 3600*h+60*m+s;
}

int main() {
    int n, time;
    int table[MIDNIGHT];
    while (true) {
        int count = 0;
        int max_count = 0;
        cin >> n;
        if (n == 0) {
            return 0;
        }
        for (int i=0; i<MIDNIGHT; i++) {
            table[i] = 0;
        }
        for (int i=0; i<n; i++) {
            time = read_time();
            table[time] += 1;
            time = read_time();
            table[time] -= 1;
        }
        for (int i=0; i<MIDNIGHT; i++) {
            count += table[i];
            max_count = max(count, max_count);
        }
        cout << max_count << endl;
    }
}