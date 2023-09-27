#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
double pi = 3.141592653589793;
ll mod = 1000000007;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        set<string> all;
        all.insert(S);
        for (int j = 1; j < S.size() + 1; j++) {
            string L = S.substr(0, j);
            string R = S.substr(j);
            string L2 = L;
            reverse(L2.begin(), L2.end());
            string R2 = R;
            reverse(R2.begin(), R2.end());
            all.insert(R + L);
            all.insert(L + R2);
            all.insert(R2 + L);
            all.insert(L2 + R);
            all.insert(R + L2);
            all.insert(L2 + R2);
            all.insert(R2 + L2);
        }
        cout << all.size() << endl;
    }
}

