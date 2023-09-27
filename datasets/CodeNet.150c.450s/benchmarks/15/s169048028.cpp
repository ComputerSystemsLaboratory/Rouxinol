#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 2147483647
 
using namespace std;


int S[10000];


bool search(int x, int n)
{
	for (int i = 0; i < n; i++) {
		if (S[i] == x) return (true);
	}
	return (false);
} 

int main(void)
{
	 int n, q;
	 int cnt = 0;
	 int x;

	 cin >> n;
	 for (int i = 0; i < n; i++) cin >> S[i];
	 
	 cin >> q;

	 for (int i = 0; i < q; i++) {
		 cin >> x;
		 if (search(x, n)) cnt++; 
	 }
	 cout << cnt << endl;

	 return (0);
}