#include <map>
#include <set>
#include <list>
#include <cstdio>
#include <cmath>
#include <deque>
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
    
    vector< int > rel(1001);
    rel[1000] = 'm', rel[100] = 'c', rel[10] = 'x', rel[1] = 'i';
    rel['m'] = 1000, rel['c'] = 100, rel['x'] = 10, rel['i'] = 1;
    int n; cin >> n;
    while(n--) {
        string a, b;
        cin >> a >> b;
        int as = 0, bs = 0, sum = 0;
        for(int i = 0; i < a.size(); i++) {
            if(isdigit(a[i])) {
                as += rel[a[i + 1]] * (a[i] - '0');
                i++;
            } else {
                as += rel[a[i]];
            }
        }
        for(int i = 0; i < b.size(); i++) {
            if(isdigit(b[i])) {
                bs += rel[b[i + 1]] * (b[i] - '0');
                i++;
            } else {
                bs += rel[b[i]];
            }
        }
        string ans = "";
        sum = as + bs;
        for(int i = 1000; i >= 1; i /= 10) {
            if(sum / i % 10 > 0) {
                if(sum / i % 10 > 1) cout << sum / i % 10;
                cout << (char)rel[i] ;
            }
        }
        cout << endl;
    }
}