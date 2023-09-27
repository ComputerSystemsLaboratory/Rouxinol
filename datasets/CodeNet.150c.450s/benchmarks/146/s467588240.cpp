#include <iostream>
#include <complex>
#include <string>
using namespace std;

using P = complex<long long>;

int cross(P p1, P p2) {
    return (p1.real() * p2.imag() - p1.imag() * p2.real());
}

string adj(string num) {
    int cnt = 0;
    while (cnt < num.size() && num[cnt] != '.') cnt++;
    if (cnt == num.size()) {
	num += ".00000";
    }
    else {
	int len = num.size() - 1 - cnt;
	for (int i = 0; i < 5 - len; i++) num += '0';
    }
    return num;
}


long long pr(string num) {
    num = adj(num);
    long long ans = 0;
    for (int i = 0; i < num.size(); i++) {
	if ('0' <= num[i] && num[i] <= '9') {
	    ans = ans * 10 + num[i] - '0';
	}
    }
    if (num[0] == '-') ans = -ans;
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
	P pp[4];
	for (int i = 0; i < 4; i++) {
	    string x, y;
	    cin >> x >> y;
	    pp[i] = P(pr(x), pr(y));
	}
	if (cross(pp[1] - pp[0], pp[3] - pp[2]) == 0) {
	    cout << "YES" << endl;
	}
	else {
	    cout << "NO" << endl;
	}
    }
    return 0;
}