#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

using namespace std;

int main(){
	int n, m;
	while(cin >> n){
		if(!n) break;
		map<char, char> map;
		char str;

		for(int i=0; i<n; ++i){
			char a, b;
			cin >> a >> b;
			map.insert(pair<char, char>(a, b));
		}

		cin >> m;
		for(int i=0; i<m; ++i){
			cin >> str;
			if(map.count(str) == 1){
				cout << map[str];
			} else {
				cout << str;
			}
		}

		cout << endl;
	}

    return 0;
}