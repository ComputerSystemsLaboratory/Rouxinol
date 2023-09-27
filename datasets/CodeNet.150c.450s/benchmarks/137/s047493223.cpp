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

vector<bool> dictionary((int)pow(4, 12), false);

int main() {
	int n;
	cin >> n;
	Loop(i, n) {
		char cquery[10], cword[15];
		scanf("%s %s", cquery, cword);
		lint j = 0, k = 1, key = 0;
		while (cword[j] != '\0') {
			if (cword[j] == 'A') key += 1 * k;
			else if (cword[j] == 'T') key += 2 * k;
			else if (cword[j] == 'G') key += 3 * k;
			else key += 4 * k;
			k *= 4;
			j++;
		}
		if (cquery[0] == 'i') {
			dictionary[key - 1] = true;
		}
		else {
			bool judge = dictionary[key - 1];
			if (judge) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}