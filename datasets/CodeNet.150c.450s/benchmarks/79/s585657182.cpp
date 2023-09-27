#include <iostream>
#include <cstdio>
#include <cstring>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

const int MAX_N = 50;
int n, r, p, c;

int cards_a[MAX_N], cards_b[MAX_N];

int main() {
    while(cin >> n, cin >> r, n != 0 && r != 0) {
        for(int i = 0; i < n; i++) cards_a[i] = n - i;

        for(int i = 0; i < r; i++) {
            cin >> p >> c;
            for(int j = 0; j < p - 1; j++) {
                cards_b[j + c] = cards_a[j];
            }
            for(int j = 0; j < c; j++) {
                cards_b[j] = cards_a[j + p - 1];
            }
            for(int j = 0; j < p + c - 1; j++) {
                cards_a[j] = cards_b[j];
            }
        }
        cout << cards_a[0] << endl;
    }

    return 0;
}