#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <functional>
#include <cstring>
#include <queue>
#include <stack>
#include <math.h>
#include <iterator>
#include <vector>
#include <string>
#include <set>
#include <math.h>
#include <iostream> 
#include <random>
#include<map>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <list>
#include <typeinfo>
#include <list>
#include <set>
#include <cassert>
#include<fstream>
#include <unordered_map>  
using namespace std;
#define Ma_PI 3.141592653589793
#define eps 0.00000000000000000000000001
#define LONG_INF 10000000000000000
#define GOLD 1.61803398874989484820458
#define MAX_MOD 1000000007
#define REP(i,n) for(long long i = 0;i < n;++i)
int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) return 0;
		vector<int> geko;
		REP(i, a) {
			int tmp;
			cin >> tmp;
			geko.push_back(tmp);
		}
		int ans = -1;
		int now_a = 0;
		for (int i = b; i <= c&&i < geko.size(); ++i) {
			if (ans <= geko[i-1] - geko[i ]) {
				ans = geko[i-1] - geko[i ];
				now_a = i;
			}
		}
		cout << now_a << endl;
	}
}

