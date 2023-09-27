
#include <iostream>

using namespace std;

#define MAX 100000
int n, k;
long long w[MAX];


int check(long long p)
{
	int i = 0;
	long long s = 0;


	for (int j = 0; j < k; j++) {

		s = 0;

		while (p >= w[i] + s) {
			s += w[i];

			i++;
			if (i == n) {
				return n;
			}
		}
	}

	return i;

}


//????????????????????§????????????????°?????????????
int  minKw()
{
	long long left = 0;
	long long right = 100000 * 10000;
	long long mid;
	int v;

	while ((right - left)>1) {
		mid = (left + right) / 2;
		v = check(mid);


		if (v >= n) {
			right = mid;
		}
		else {
			left = mid;
		}

	}

	return right;

}



int main(void)
{

	cin >> n >> k;
	//	insertionSortInput(w, n);

	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}

	cout << minKw() << endl;

	return 0;
}