#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
    int n;
    while (cin >> n, n) {
        int sum[1000];
        int count = 0;
        sum[0] = 1;
        for (int i = 2; i < 1000; ++i) {
            sum[i-1] = i + sum[i-2]; 
        }
        for (int i = 1; i < 1000; ++i) {
            if (sum[i] == n) {
                count++;
                continue;
            }
            for (int j = 0; j < i - 1; ++j) {
                int tmp = sum[i] - sum[j];
                if (tmp == n || sum[i] == n) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
