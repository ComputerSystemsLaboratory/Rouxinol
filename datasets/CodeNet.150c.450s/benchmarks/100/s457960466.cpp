#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
using namespace std;

Int F(int n){
	if (n == 1)
		return 1;
	return n*F(n - 1);
}

int main(){
	int a;
	cin >> a;
	cout << F(a) << endl;
	return 0;
}