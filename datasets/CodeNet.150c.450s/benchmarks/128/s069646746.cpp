#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

string str;

int main(int argc, char const *argv[]) {
	cin >> str;
	reverse(str.begin(), str.end());
	cout << str << endl;
	return 0;
}