#include<iostream>
#include<math.h>
#include<stdlib.h>

#define INF -99999999999;
using namespace std;

class answer {
public:
	int s, e, ans;
	answer(){ s = 0; e = 0; ans = 0; }
	answer(int a, int b, int c) {
		s = a;
		e = b;
		ans = c;
	}
	void show3(void) { cout << s << " " << e << " " << ans; }
	void show1(void) { cout << ans << "\n"; }
};

answer fun2(int *B, int low, int mid, int high)
{
	int leftsum = INF;
	int rightsum = INF;
	int sum = 0;
	int maxleft, maxright;

	for (int i = mid; i >= low; i--) {
		sum += B[i];
		if (sum > leftsum) {
			leftsum = sum;
			maxleft = i;
		}
	}
	sum = 0;
	for (int j = mid + 1; j <= high; j++) {
		sum += B[j];
		if (sum > rightsum) {
			rightsum = sum;
			maxright = j;
		}
	}

	answer b(maxleft, maxright, leftsum + rightsum);
	return b;
}

answer fun3(int* B, int low, int high) {
	if (high == low) {
		answer a(low, high, B[low]);
		return a;
	}
	else {
		int mid = (int)floor((low + high) / 2);
		answer left = fun3(B, low, mid);
		answer right = fun3(B, mid + 1, high);
		answer cross = fun2(B, low, mid, high);

		if (left.ans >= right.ans&&left.ans >= cross.ans) {
			return left;
		}
		else if (right.ans >= left.ans&&right.ans >= cross.ans) {
			return  right;
		}
		else
			return cross;
	}

}



answer fun1(int *B,int n)
{
	int sum;
	int ans = -999999;
	int ansi, anse;
	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = i; j <= n; j++) {
			sum += B[j];
			if (sum > ans) {
				ans = sum;
				ansi = i;
				anse = j;
			}
		}
	}
	answer a(ansi, anse, ans);
	return a;
}



int main()
{
	// cout << "size--";
	int n;
	cin >> n;

	int*A;
	int*B;
	A = new int[n + 1];
	B = new int[n + 1];
	A[0] = 0;
	for (int i = 1; i <= n; i++){
		cin >> A[i];
		B[i] = A[i] - A[i - 1];
	}

	// answer a=fun2(B, n);
	answer a = fun3(B, 2, n);
	a.show1();

	delete A;
	delete B;

	return 0;
}