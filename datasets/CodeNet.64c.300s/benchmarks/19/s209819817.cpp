#include <iostream>
#include <climits>
using namespace std;

void solve(int n) 
{
    int seq[n];
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    bool all_minus = true;
    for (int i = 0; i < n; i++) {
        if (seq[i] >= 0) {
            all_minus = false;
        }
    }
    if (all_minus) {
        int min = seq[0];
        for (int i = 1; i < n; i++) {
            min = seq[i] > min ? seq[i] : min;
        }
        cout << min << endl;
        return;
    }

    int cur_sum = seq[0];
    int cur_max = seq[0];

    for (int i = 1; i < n; i++) {
        cur_sum += seq[i];
        if (cur_sum < 0) {
            cur_sum = 0;
        } else {
            cur_max = cur_sum > cur_max ? cur_sum : cur_max;
        }
    }
    cur_max = (cur_max > cur_sum ? cur_max : cur_sum);
    cout << cur_max << endl;
}

int main(void)
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        solve(n);
    }
    return 0;
}