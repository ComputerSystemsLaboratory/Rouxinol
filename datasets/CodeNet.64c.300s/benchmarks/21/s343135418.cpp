#include<iostream>
#include<string>
//0001
#include<cstddef>
#include<queue>
#include<vector>
//0003
#include<algorithm>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	//0000
	/*
	int i, j;

	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}
	*/
	//0001
	/*
	int i;
	const size_t MNum = 10;
	int MHeight[MNum];
	int MH1 = 0, MH2 = 0, MH3 = 0;
	for (i = 0; i < 10; i++) {
		cin >> MHeight[i];
		if (MHeight[i] > MH1) {
			MH3 = MH2;
			MH2 = MH1;
			MH1 = MHeight[i];
		}
		else if (MHeight[i] > MH2) {
			MH3 = MH2;
			MH2 = MHeight[i];
		}
		else if (MHeight[i] > MH3) {
			MH3 = MHeight[i];
		}
	}
	cout << MH1 << endl << MH2 << endl << MH3 << endl;
	*/
	/*
	priority_queue<int, vector<int>, less<int> > que;
	int MH;

	for (int i = 0; i < 10; i++) {
		cin >> MH;
		que.push(MH);
	}

	for (int j = 0; j < 3; j++) {
		cout << que.top() << endl;
		que.pop();
	}
	*/
	//0002
	/*
	int a, b;
	while (cin >> a >> b) {
		int sum = a + b;
		int count = 0;
		while (sum > 0) {
			sum = sum / 10;
			count++;
		}
		cout << count << endl;
	}
	*/
	//0003
	/*
	int a[3];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	*/
	double a,b,c,d,e,f;
	double x, y;
	int xi, yi;
	//???????????£??¨?????????????????§???????????????
	while (
		cin >> a
		>> b
		>> c
		>> d
		>> e
		>> f
		) {
		x = (e*c - b*f) / (e*a - b*d);
		y = (a*f - c*d) / (e*a - b*d);
		xi = roundf(x * 1000);
		yi = roundf(y * 1000);
		x = xi;
		x = x / 1000;
		y = yi;
		y = y / 1000;
		cout << fixed
			<< setprecision(3)
			<< x
			<< " "
			<< y
			<< endl;
	}
	return 0;
}