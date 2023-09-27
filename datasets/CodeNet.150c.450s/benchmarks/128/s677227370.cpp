#include <string>
#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <iomanip>


using namespace std;

typedef unsigned long long ull;
int main(void) {
	string str;
	cin >> str;
	for(int i = str.size() - 1; i >= 0; i--){
		cout << str[i];
	}
	cout << endl;
}