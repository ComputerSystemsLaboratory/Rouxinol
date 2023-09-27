#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
//#include "toollib.h"
//#include "puzzle.h"
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#pragma warning (disable:4018)
#pragma warning (disable:4244)
#pragma warning (disable:4996)

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	map<string, bool> mp;
	int n;
	cin >> n;
	Loop(i, n) {
		char query[10], cword[20];
		string word;
		scanf("%s %s", query, cword);
		word = cword;
		if(query[0]=='i'){
			mp[word] = true;
		}
		else {
			if (mp[word]) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}