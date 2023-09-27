#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
    vector<int> fibs(45);
    fibs[0] = fibs[1] = 1;
    for (int i = 2; i <= 44; i++) {
        fibs[i] = fibs[i - 1] + fibs[i - 2];
    }
    int n;
    cin >> n;
    cout << fibs[n] << endl;
}