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
	 std::string w, s;
	 std::cin >> w;
	 std::transform(w.begin(), w.end(), w.begin(), tolower);
	 int ans = 0;
	 while (std::cin >> s) {
		 if (s == "END_OF_TEXT")break;
		 std::transform(s.begin(), s.end(), s.begin(), tolower);
		 if (w == s) {
			 ans += 1;
		 }
	 }
	 std::cout << ans << std::endl;
	return 0;
}
