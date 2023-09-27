#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int mcxi2int(string mcxi) {
    int ret = 0;
    int i = 0;
    while(i < mcxi.length()) {
        int c = 1;
        if('2' <= mcxi[i] && mcxi[i] <= '9') {
            c = mcxi[i]  - '0';
            i++;
        }
        switch(mcxi[i]) {
            case 'm':
            ret += c*1000;
            break;
            case 'c':
            ret += c*100;
            break;
            case 'x':
            ret += c*10;
            break;
            case 'i':
            ret += c;
            break;
        }
        i++;
    }
    return ret;
}

string int2mcxi(int n) {
    string ret;
    int d = 1000;
    while(n) {
        char x = d == 1000? 'm' : (d == 100? 'c' : (d == 10? 'x' : 'i'));
        int c = n / d;
        if(c == 0){

        } else if(c == 1) {
            ret.push_back(x);
        } else {
            ret.push_back(c + '0');
            ret.push_back(x);
        }
        n %= d;
        d /= 10;
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s1, s2; cin >> s1 >> s2;
        cout << int2mcxi(mcxi2int(s1) + mcxi2int(s2)) << endl;
    }
}

