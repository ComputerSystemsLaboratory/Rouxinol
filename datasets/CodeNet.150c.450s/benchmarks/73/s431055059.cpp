#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#define MOD 1000000007
using namespace std;

int a[262145] = {};
int f(int l, int r, int kl, int kr)
{

	if (kl>=r || kr<=l){
		return 0;
	}else if (kl <= l&&kr >= r){
			return a[(131072 + l) / (r - l)];
	}
	else{
		return f(l, (l + r) / 2, kl, kr) + f((l + r) / 2, r, kl, kr);
	}
}
int main()
{
	int n, q,d;
	cin >> n>> q;
	int com[100005], x[100005], y[100005];
	int i,j;
	for (i = 0; i < q; i++){
		cin >> com[i] >> x[i] >> y[i];
	}
	for (i = 0; i < q; i++){
		if (com[i] == 0){
			d = x[i] + 131071;
			for (j = 0; j < 18;j++){
				a[d] += y[i];
				d = d / 2;
			}
		}
		else{
			cout << f(0, 131072, x[i]-1, y[i]) << endl;
		}
	}

	return 0;
}