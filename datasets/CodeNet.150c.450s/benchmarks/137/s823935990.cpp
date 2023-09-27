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
	char str[10], com[13];
	map<string, bool> m;
	cin >> n;
	for( int i = 0; i < n; i++) {
		scanf("%s%s", com, str);
		if( com[0] == 'i') m[string(str)] = true;
		else {
			if( m[string(str)]) cout << "yes";
			else cout << "no";
			cout <<endl;
		}
	}
	return 0;
}