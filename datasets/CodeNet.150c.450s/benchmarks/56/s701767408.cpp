#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void Q1() {

	double r;
	double PI = 3.141592653589;
	cin >> r;

	printf("%lf %lf\n", PI*r*r, 2 * r*PI);

}

void Q2() {
	int a, b;
	string op;

	while (true)
	{
		cin >> a >> op >> b;
		if (op == "?") { break; }
		else if (op == "+") {
			cout << a + b << endl;
		}
		else if (op == "-") {
			cout << a - b << endl;
		}
		else if (op == "*") {
			cout << a * b << endl;
		}
		else if (op == "/"){
			cout << a / b << endl;
		}
	}
	
}

void Q3() {
	int x; cin >> x;
	long long sum = 0;
	vector<int> a;
	a.resize(x);

	for (int i = 0; i < x; i++) {
		cin >> a[i];
		sum += a[i];

	}

	sort(a.begin(), a.end());

	cout << a[0] << " " << a[x - 1] << " " << sum << endl;
}

void Q4() {

	while (true)
	{
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0)break;

		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << "#";
				if (j == b - 1) {
					cout << "\n";
					break;
				}
			}
		}

		cout << "\n";
	}
}

int main() {
	Q3();
	return 0;
}