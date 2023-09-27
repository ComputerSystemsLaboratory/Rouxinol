#include <array>
#include <iostream>
#include <algorithm>
using std::for_each;
using std::array;
using std::cout;
using std::endl;
using std::cin;

int main() {
	array<int,4> a,b;
	for_each(a.begin(),a.end(),[](int &s){cin >> s;});
	for_each(b.begin(),b.end(),[](int &s){cin >> s;});
	int sum_a = 0,sum_b = 0;
	for_each(a.begin(),a.end(),[&sum_a](int s)mutable{sum_a += s;});
	for_each(b.begin(),b.end(),[&sum_b](int s)mutable{sum_b += s;});
	cout << (sum_a >= sum_b ? sum_a : sum_b) << endl;
}