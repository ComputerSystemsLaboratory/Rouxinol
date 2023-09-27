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
#include <cstring>
#include <cstdlib>

typedef long long ll;

using namespace std;

int main(void){
	int pa, pb, n;

	while(cin >> n){
		pa = pb = 0;
		if(!n) break;
		for(int i=0; i<n; ++i){
			int c1, c2;
			cin >> c1 >> c2;
			if(c1 > c2){
				pa += c1 + c2;
			}else if(c1 < c2){
				pb += c1 + c2;
			} else {
				pa += c1, pb += c1;
			}
		}

		cout << pa << " " << pb << endl;
	}

	return 0;
}