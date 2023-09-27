#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int x;
	int i = 0;
	while (true) {
		cin >> x;
		++i;
		if (x==0)break;
		cout << "Case " << i <<": "<< x << endl;
	}
	return 0;
}
