#include <iostream>
#include <string>
#include <deque>
#include <algorithm>


using namespace std;

int allocation(int n, int k, deque<int> w) {
    int total = 0;
    int maxValue = 0;
    for (const int i : w) {
        total += i;
        if (i > maxValue) {
            maxValue = i;
        }
    }
    int result = max(total / k, maxValue);
    for ( ; ; ) {
        int trucks = 0;
        int weight = 0;
        for (const int i : w) {
            weight += i;
            if (weight == result) {
                ++trucks;
                weight = 0;
            }
            else if (weight > result) {
                ++trucks;
                weight = i;
            }
            if (trucks > k) {
                break;
            }
        }
        if (weight != 0) {
            ++trucks;
        }
        if (trucks <= k) {
            return result;
        }
        ++result;

    }
}

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int k;
    cin >> k;
    deque<int> w;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        w.push_back(x);
    }
    cout << allocation(n, k, w) << endl;

    return 0;
}

