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
	int n;
	while(cin >> n){
	int res = 0;
	for(int a = 0; a <= 9; a++){
	for(int b = 0; b <= 9; b++){
	for(int c = 0; c <= 9; c++){
	for(int d = 0; d <= 9; d++){
		if(a + b + c + d == n)res++;
	}	
	}	
	}	
	}
	cout << res << endl;
	}
}