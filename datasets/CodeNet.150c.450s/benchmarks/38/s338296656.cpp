

/* vo00_03.cpp */
#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int main()
{
	const char *y = "YES";
	const char *n = "NO";

	priority_queue<int> que;

	int N;
	int s;

	double s1, s2, s3;

	cin >> N;

	for (; N; --N) {

		for (int i = 0; i < 3; ++i) {
			cin >> s;
			que.push(s);
		}

		s1 = que.top(); que.pop();
		s2 = que.top(); que.pop();
		s3 = que.top(); que.pop();

		if (pow(s1, 2) == pow(s2, 2) + pow(s3, 2)) cout << y << '\n';
		else cout << n << '\n';


		while (!que.empty()) que.pop();	//	キューを空にする
	}

	return 0;
}