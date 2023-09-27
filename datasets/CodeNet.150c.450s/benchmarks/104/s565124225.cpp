#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;






int main()
{
	int n, w;
	int a[30], b[30],c[30];
	cin >> w;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d,%d", &a[i], &b[i]);
		
	}
	for (int i = 1; i <= w; i++) {
		c[i] = i;
	}
	for (int i = 0; i < n; i++) {
		swap(c[a[i]], c[b[i]]);
	}
	for (int i = 1; i <= w; i++) {
		cout << c[i] << endl;
	}
	

}