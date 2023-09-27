#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    int n, a[4] = {};
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "AC") a[0]++;
        else if (s == "WA") a[1]++;
        else if (s == "TLE") a[2]++;
        else a[3]++;
    }
    cout << "AC x " << a[0] << '\n';
    cout << "WA x " << a[1] << '\n';
    cout << "TLE x " << a[2] << '\n';
    cout << "RE x " << a[3] << '\n';
}
