#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <list>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <map>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[250+1];
	for( int i = 1; i <= n; i++) cin >> a[i];
	for( int i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << a[i] << ", ";
		if(i/2 >= 1) cout << "parent key = " << a[i/2] << ", ";
		if(2*i <= n) cout << "left key = " << a[i*2] << ", ";
		if(2*i+1 <= n) cout << "right key = " << a[i*2+1] << ", ";
		cout <<endl;
	}
	return 0;
}