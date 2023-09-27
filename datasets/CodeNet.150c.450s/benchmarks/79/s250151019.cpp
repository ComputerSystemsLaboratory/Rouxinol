#include <map>
#include <set>
#include <list>
#include <cstdio>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cctype>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define fr first
#define sc second
#define mp make_pair

typedef long long int64;
typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

const int INF = 2 << 28;
const double EPS = 1e-10;

int main() {

    int n, r;
    while(cin >> n >> r, n) {
        vector< int > card(n);
        for(int i = 0; i < n; i++)
            card[i] = n - i;
        while(r--) {
            int p, c; cin >> p >> c;
            vector< int > temp(c);
            p--;
            for(int cnt = 0, i = p; i < p + c; i++, cnt++)
                temp[cnt] = card[i];
            for(int i = p - 1; i >= 0; i--)
                card[i + c] = card[i];

            for(int i = 0; i < c; i++) {
                //cout << card[i] << " " << temp[i] << endl;
                card[i] = temp[i];
            }

        }

        cout << card[0] << endl;
    }
}