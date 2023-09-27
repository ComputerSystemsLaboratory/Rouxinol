#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;
long a[251];
int main(){
	int H; scanf("%d",&H);
	for (int i = 1; i <= H; ++i) scanf("%ld",&a[i]);
	for (int i = 1; i <= H; ++i){
		cout << "node " << i << ": key = " << a[i] << ", ";
		int tmp = i / 2;
		if (tmp >=1 ) cout << "parent key = " << a[tmp] << ", ";
		tmp = 2 * i;
		if (tmp <= H)	cout << "left key = " << a[tmp] << ", ";
		tmp = 2 * i + 1;
		if (tmp <= H) cout << "right key = " << a[tmp] << ", ";
		cout << '\n';
	}
}