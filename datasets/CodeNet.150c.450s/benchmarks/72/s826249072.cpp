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
	 std::cin >> s;
	 for (int i = 0;i < s.size();i++) {
		 if (islower(s[i])) {
			 s[i] = toupper(s[i]);
		 }
		 else {
			 s[i] = tolower(s[i]);
		 }
	 }
	 std::cout << s;
	 while (std::cin >> s) {
		 std::cout << ' ';
		 for (int i = 0;i < s.size();i++) {
			 if (islower(s[i])) {
				 s[i] = toupper(s[i]);
			 }
			 else {
				 s[i] = tolower(s[i]);
			 }
		 }
		 std::cout << s ;
	 }
	 std::cout << std::endl;
	return 0;
}
