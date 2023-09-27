#include <iostream>
#include <string>
#include <map>
using namespace std;

int getValue(string v, int &ptr) {
    int ret = 0;
    while(isdigit(v[ptr])) {
        ret *= 10;
        ret += v[ptr++] - '0';
    }
    return ret;
}

int main() {

    int N;
    cin >> N;
    map< char, int > rel;
    rel['m'] = 1000, rel['c'] = 100, rel['x'] = 10, rel['i'] = 1;
    while(N--) {
        string s1, s2; cin >> s1 >> s2;
        int sum1 = 0, sum2 = 0;

        s1 = "a" + s1, s2 = "a" + s2;

        for(int i = 1; i <= s1.size(); i++) {
            if(isdigit(s1[i])) {
                sum1 += getValue(s1, i) * rel[s1[i]];
            } else if(!isdigit(s1[i - 1])) {
                sum1 += rel[s1[i]];
            }
        }
        for(int i = 1; i <= s2.size(); i++) {
            if(isdigit(s2[i])) {
                sum2 += getValue(s2, i) * rel[s2[i]];
            } else if(!isdigit(s2[i - 1])) {
                sum2 += rel[s2[i]];
            }
        }
        sum1 += sum2;

        if(sum1 / 1000 >= 1) {
            if(sum1 / 1000 > 1) cout << sum1 / 1000;
            cout << 'm';
        }
        sum1 %= 1000;
        if(sum1 / 100 >= 1) {
            if(sum1 / 100 > 1)cout << sum1 / 100;
            cout << 'c';
        }
        sum1 %= 100;
        if(sum1 / 10 >= 1) {
            if(sum1 / 10 > 1)cout << sum1 / 10;
            cout << 'x';
        }
        sum1 %= 10;
        if(sum1 >= 1) {
            if(sum1 > 1) cout << sum1;
            cout << 'i';
        }
        cout << endl;
    }
}