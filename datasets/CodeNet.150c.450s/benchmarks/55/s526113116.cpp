#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int ctoi(char c){
		if('0' <= c && c <= '9') return (c-'0');
		else return -1;
}

int main()
{
		int n=0, i, j, m, k, ans;
		string x[10000];
		while (1) {
				cin >> x[n];
				if (x[n]=="0") break;
				n++;
		}
		for (i=0; i<n; i++) {
				ans = 0;
				for (j=0; j<x[i].size(); j++) {
						ans += ctoi(x[i][j]);
				}
				cout << ans << "\n";
		}
}