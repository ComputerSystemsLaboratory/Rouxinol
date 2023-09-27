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

const int MAX = 1000000;
const int INF = 2 << 28;
const double EPS = 1e-10;

int p[4 * MAX + 1], op[4  *MAX + 1];
vector < int > num;
int main() {
    
    for(int i = 0; i < 2 + MAX + 1; i++)
        p[i] = op[i] = INF;
    
    for(int i = 1; i < 200; i++) {
        num.push_back(i * (i + 1) * (i + 2) / 6);
        p[i * (i + 1) * (i + 2) / 6] = 1;
        if((i * (i + 1) * (i + 2) / 6) % 2) op[i * (i + 1) * (i + 2) / 6] = 1;
    }

    for(int i = 1; i <= MAX; i++) {
        for(int j = 0; j <num.size(); j++) {
            if(p[i] != INF) {
                p[i + num[j]] = min(p[i] + 1, p[i + num[j]]);
            }
            if(op[i]  != INF && num[j] % 2) {
                op[i + num[j]] = min(op[i] + 1, op[i + num[j]]);
            }
        }
    }
    
    int N;
    while(cin >> N, N) {
        cout << p[N] << " " << op[N] << endl;
    }
}