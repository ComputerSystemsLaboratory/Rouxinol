#include <iostream>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>
#include <iomanip>
#include <map>
#include <queue>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::bitset;

#define rep(i,n)    for(int i=0; i<(int)n; i++)
#define reps(i,s,e) for(int i=s; i<(int)e; i++)
typedef long double ld;
typedef long long ll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;

template<class T>
using Graph = vector<vector<T>>;

void printFixedDouble(double d, int fix) {
    cout << std::fixed;
    cout << std::setprecision(fix) << d << endl;
}

int main() {
    int n;
    cin >> n;
    // int nMax = n;
    cout << n << ":";
    for (int i = 2; i*i <= n; i++) { // i

        // iが素数
        while (true) {
            if (n % i == 0) {
                n /= i;
                cout << " " << i;
            } else {
                break;
            }
        }

        OUT:
        ;
    }
    if (n != 1) {
        cout << " " << n;
    }
    cout << endl;
}
