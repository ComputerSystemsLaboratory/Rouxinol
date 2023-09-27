#include <iostream>

using namespace std;

int analyze(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if ('a' > s[i] || s[i] > 'z')
            continue;
        int base = 0;
        switch (s[i]) {
        case 'm':
            base = 1000;
            break;
        case 'c':
            base = 100;
            break;
        case 'x':
            base = 10;
            break;
        case 'i':
            base = 1;
            break;
        }
        int mul = 1;
        if (i != 0 && ('2' <= s[i-1] && s[i-1] <= '9'))
            mul = s[i-1] - '0';
        sum += mul * base;
    }
    return sum;
}

string reverse(int i) {
    string out = "";
    for (int base = 1000; base > 0; base /= 10) {
        if (i / base == 0)
            continue;
        if (i / base >= 2)
            out.push_back('0' + i/base);
        char sign;
        switch (base) {
        case 1000:
            sign = 'm';
            break;
        case 100:
            sign = 'c';
            break;
        case 10:
            sign = 'x';
            break;
        case 1:
            sign = 'i';
            break;
        }
        out.push_back(sign);
        i %= base;
    }
    return out;
}

int main()
{
    int n;
    cin >> n;
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        int sum = analyze(s1) + analyze(s2);
        cout << reverse(sum) << endl;
    }
    return 0;
}