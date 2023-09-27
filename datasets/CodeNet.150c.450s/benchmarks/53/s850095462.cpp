#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
int n;
void dfs(int s) {
    int i;
    bool prime = true;
    for (i = 2; i * i <= s; i++) {
        if (s % i == 0) {
            cout << " " << i;
            prime = false;
            dfs(s/i);
            return;
        }
    }
    if (prime) cout << " " << s;
    return;
}
int main(void) {
    cin >> n;
    cout << n << ":";
    dfs(n);
    cout << endl;
    return 0;
}