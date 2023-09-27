#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int mcxi2int(string mcxi) {
    int res = 0;
    while (!mcxi.empty()) {
        int num = 1;
        if (isdigit(mcxi[0])) {
            num = mcxi[0] - '0';
            mcxi.erase(0, 1);
        }
        switch (mcxi[0]) {
        case 'm':
            res += num * 1000;
            break;
        case 'c':
            res += num * 100;
            break;
        case 'x':
            res += num * 10;
            break;
        case 'i':
            res += num;
            break;
        }
        mcxi.erase(0, 1);
    }
    return res;
}

void int2mcxi(int from, string& mcxi) {
    const char digitChar[] = "ixcm";
    int num;
    for (int i = 3; i >= 0; i--) {
        num = from / (int) pow(10, i);
        if (num > 0) {
            if (num > 1) {
                mcxi.push_back(num + '0');
            }
            mcxi += digitChar[i];
        }
        from %= (int) pow(10, i);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string mcxi1, mcxi2;
        cin >> mcxi1 >> mcxi2;
        int sum = mcxi2int(mcxi1) + mcxi2int(mcxi2);
        string output;
        int2mcxi(sum, output);
        cout << output << endl;
    }
}