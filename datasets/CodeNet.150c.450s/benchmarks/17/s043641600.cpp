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
	int a[5];
	for(int i=0; i<5; ++i){
		cin >> a[i];
	}

	sort(a, a+5, greater<int>());

	for(int i=0; i<5; ++i){
		if(i == 4){
			cout << a[i] << endl;
			break;
		}
		cout << a[i] << " ";;
	}

    return 0;
}