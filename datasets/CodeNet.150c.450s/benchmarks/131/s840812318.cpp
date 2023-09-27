#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::vector;

int main(void) {
    int a;
    int L;
    int times;
    bool hit;
    int max;
    int min;

    while (1) {
        cin >> a >> L;
        if (a == 0 && L == 0) {
            break;
        }
        times = 0;
        hit = false;
        vector<int> keep_old;
        keep_old.push_back(a);
        do { 
            int slot = L - 1;
            vector<int> number(L, 0);
            while (a != 0) {
                number[slot] = a % 10;
                a /= 10;
                slot--;
            }
            sort(number.begin(), number.end());
            max = 0;
            min = 0;
            for (int i = 0; i < L; i++) {
                max += number[i] * pow(10, i);
                min += number[i] * pow(10, L - 1 - i);
            }
            a = max - min;
            for (int i = 0; i < keep_old.size(); i++) {
                if (a == keep_old[i]) {
                   hit = true; 
                   cout << i << " " << keep_old[i] << " " << keep_old.size() - i << endl;
                   continue;
                }
            }
            keep_old.push_back(a);
            times++;
        } while(! hit);
    }
    return 0;
}