#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector<int> A;
	int a;
	int sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin>> a;
		A.push_back(a);
	}
	for (int i = 0; i < A.size(); i++) {
		a = A.at(i);
		if (a == 2)sum++;
		else if (a<2||a % 2 == 0) {}
		else {
			int j=3;
			bool flag =true;
			while (j <= sqrt(a)) {
				if (a%j == 0) {
					flag = false;
				}
				j += 2;
			}
			if (flag == true)sum++;
		}
	}
	cout << sum << endl;
    return 0;
}