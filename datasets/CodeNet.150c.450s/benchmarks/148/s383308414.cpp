#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>
#include <random>
#include <ctime>
using namespace std;
using ll = long long int;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
ll mod = 1000000007;

int main() {
    int n;
    cin >> n;
    int a = 0,w = 0,t = 0,r = 0;
    rep(i,n) {
        string s;
        cin >> s;
        if(s == "AC") a++;
        else if(s == "WA") w++;
        else if(s == "TLE") t++;
        else r++;
    }
    cout << "AC x " << a << endl;
    cout << "WA x " << w << endl;
    cout << "TLE x " << t << endl;
    cout << "RE x " << r << endl;
}
