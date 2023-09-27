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
#define foreach(c, it) for(typeof(c) it = (c).begin(); it != (c).end(); it++)

typedef long long int64;
typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

const int INF = 2 << 28;
const double EPS = 1e-10;

#define MAX 1000000

int main() {
    
    vector< bool > p(MAX, true);
    p[0] = p[1] = false;
    for(int i = 2; i * i < MAX; i++)
        if(p[i])
            for(int j = i + i; j < MAX; j += i)
                p[j] = false;
    
    int a, d ,n;
    while(cin >> a >> d >> n, d) {
        int cnt = 0;
        for(int i = 1; ; i++) {
            int sum = a + (i - 1) * d;
            if(p[sum]) cnt++;
            if(cnt == n) {
                cout << sum << endl;
                break;
            }
        }
    }
}