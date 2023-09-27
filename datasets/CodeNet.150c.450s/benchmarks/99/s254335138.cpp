#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

map<char,int> mcxi = {
    {'m',1000}, {'c',100}, {'x',10}, {'i',1}
};
map<int,char> mcxi_rev = {
    {1000,'m'}, {100,'c'}, {10,'x'}, {1,'i'}
};

int toInt(string s) {
    int ret = 0;
    for (int i=0; i<(int)s.size(); ++i) {
        if (isalpha(s[i])) {
            ret += mcxi[s[i]];
        } else {
            ret += (s[i] - '0') * mcxi[s[i+1]];
            ++i;
        }
    }
    return ret;
}

string toMCXI(int n) {
    stringstream ss;
    for (int i=1000; i>=1; i/=10) {
        int d = (n % (i*10)) / i;
        if (d == 0) {
            continue;
        } else if (d == 1) {
            ss << mcxi_rev[i];
        } else {
            ss << d << mcxi_rev[i];
        }
    }
    return ss.str();
}

int main() {
    int n;
    cin >> n;
    string a, b;
    while (n--) {
        cin >> a >> b;
        cout << toMCXI(toInt(a) + toInt(b)) << endl;
    }
    return 0;
}