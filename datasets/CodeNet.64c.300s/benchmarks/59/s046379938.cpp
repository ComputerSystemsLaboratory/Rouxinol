#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

bool call(int x) {
	if (x == 2) return true; //2????´???°	

	if (x < 2 || x % 2 == 0) return false; //2??\?????¨2????????°????´???°??§?????????

	static int i = 3; //i=1,2???????????????????????§???????????????

	for (i = 3; i <= sqrt(x); i += 2) { //?\???°??§?????????????????????????????????????????°???????????§???i+=2
		if (x%i == 0) return false;		//??????????´???°x??????????´??????°???p<=???x??????????????§??????????????????
	}									//x?????????????????§??§??????

	return true;
}

int main() {
	int n, i,a[10000],sum = 0;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
		if (call(a[i])) sum++;

	cout << sum << endl;

	return 0;
}