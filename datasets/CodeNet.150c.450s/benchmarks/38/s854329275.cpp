#include<iostream>
#include<vector>
using namespace std;

void judgement(int a,int b,int c) {
	if (a == b && b == c || a <= 0 || b <= 0 || c <= 0) {
		cout << "NO" << endl;
		return;
	}
	else if ((a*a) == (b*b) + (c*c) || (b*b) == (a*a) + (c*c) || (c*c) == (a*a) + (b*b)) {
		cout << "YES" << endl;
		return;
	}
	else {
		cout << "NO" << endl;
		return;
	}
}

int main() {
	unsigned int n;//dataset

	cin >> n;

	vector<int> vector_a;
	vector<int> vector_b;
	vector<int> vector_c;

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		vector_a.push_back(a);
		vector_b.push_back(b);
		vector_c.push_back(c);
	}

	for (int i = 0; i < n; i++) {
		judgement(vector_a[i], vector_b[i], vector_c[i]);
	}

	return 0;

}