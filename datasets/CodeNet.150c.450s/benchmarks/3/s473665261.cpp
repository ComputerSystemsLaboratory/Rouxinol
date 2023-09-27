#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>
#include <queue>
#include <utility>
#include <functional>
#include <deque>
#include <cctype>

const long long int Z = 1000000007;
const long long int INF = 1 << 30;
int flag = 0;
using ll = long long;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a%b);

}
ll lcm(ll a, ll b) {
	ll g = gcd(a, b);
	return a / g * b;
}

int main() {
	std::string s;
	int n;
	std::cin >> s >> n;
	for (int i = 0;i < n;i++) {
		std::string t;
		std::cin >> t;
		if (t == "print") {
			int a, b;
			std::cin >> a >> b;
			for (int j = a;j <= b;j++) {
				std::cout << s[j];
			}
			std::cout << std::endl;
		}
		if (t == "reverse") {
			int a, b;
			std::cin >> a >> b;
			std::reverse(s.begin() + a, s.begin() + b + 1);
		}
		if (t == "replace") {
			int a, b;
			std::string p;
			std::cin >> a >> b >> p;
			int k = 0;
			for (int j = a;j <= b;j++) {
				s[j] = p[k];
				k++;
			}
		}
	}
	return 0;
}
