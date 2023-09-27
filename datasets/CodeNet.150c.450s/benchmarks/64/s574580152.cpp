#include <iostream>
using namespace std;

int a[20];
int m[200];
int n, q;


bool isSumOk(int sum,int m,int i) 
{
	if (i == n - 1) {
		if (sum == m) {
			return true;
		}
		else {
			return false;
		}
	}
	i++;
	bool pt = isSumOk(sum+a[i],m,i);
	bool pf = isSumOk(sum, m, i);

	return (pt || pf);
}


int main(void)
{

	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m[i];
	}

	for (int i = 0; i < q; i++) {
		cout << ((isSumOk(a[0], m[i], 0)||isSumOk(0,m[i],0)) ? "yes" : "no") << endl;
	}

	return 0;
}