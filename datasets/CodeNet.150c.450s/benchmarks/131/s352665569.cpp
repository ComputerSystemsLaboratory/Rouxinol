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

    string s;
    int L;
    while(cin >> s >> L, L) {
        int cnt = 0;
        vector< int > used(1000001, -1);
        used[atoi(s.c_str())] = 0;
        while(true) {
            cnt++;
            while(s.size() < L) s = "0" + s;
            string mini = s, maxi = s;
            sort(mini.begin(), mini.end());
            sort(maxi.rbegin(), maxi.rend());
            int next = atoi(maxi.c_str()) - atoi(mini.c_str());
            if(used[next] != -1) {
                cout << used[next] << " " << next << " " << cnt - used[next] << endl;
                break;
            }
            used[next] = cnt;
            s = to_string(next);
        }
    }
}