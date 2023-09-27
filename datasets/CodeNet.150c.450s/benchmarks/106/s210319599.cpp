#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, d, e;
	e=0;
	cin >> a >> b >> c;
	for (d=a; d<100000; d++ ){
		if (d>b)break;
		else{
			if (c%d == 0){e+=1;}
			}
		}
		cout << e << endl;
	return 0;
}

