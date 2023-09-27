#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n1,c,p,n, r,y[50],tmp[50];
	while (cin >> n >> r&&n&&r) {
		n1 = n;
		for (int i = 0; i < n; i++) {
			y[i] = n1--;
			//cout << y[i] << ' ';
		}//cout << endl;
		
		for (int j = 0; j < r; j++) {
			cin >> p >> c;
			for (int k = 0; k < p-1; k++) {
				tmp[k] = y[k];
			}
			for (int i = 0; i < c; i++) {
				y[i] = y[p-1 + i];
			}
			for (int l = 0; l < p-1; l++) {
				y[c + l] = tmp[l];
			}
			//for (int i = 0; i < n; i++)cout << ' ' << y[i]; cout << endl;
		}
		cout << y[0] << endl;
	}
}