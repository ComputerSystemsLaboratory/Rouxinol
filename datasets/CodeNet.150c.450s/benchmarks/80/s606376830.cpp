#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1, a2, a3, a4, b1, b2, b3, b4;
	cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;
	cout << max(a1+a2+a3+a4, b1+b2+b3+b4) << endl;	
	return 0;
}