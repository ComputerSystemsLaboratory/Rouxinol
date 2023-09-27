#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        vector<int> imos(100000, 0);
        for (int i=0; i<n; i++) {
            int h, m, s, start, goal;
            char colon;
            cin >> h >> colon >> m >> colon >> s;
            start = s + m*60 +h*60*60;
            cin >> h >> colon >> m >> colon >> s;
            goal = s + m*60 +h*60*60;

            imos[start] += 1;
            imos[goal]  -= 1;
        }
        int sum = 0;
        for (int i=0; i<100000; i++) {
            sum += imos[i];
            imos[i] = sum;
        }
        cout << *max_element(imos.begin(), imos.end()) << endl;
    }
}
