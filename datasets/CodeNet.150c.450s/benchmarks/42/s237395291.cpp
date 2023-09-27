#include <string>
#include <stack>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <utility>
using namespace std;


#if 0
queue<pair<string, int>>はダメです。queue<pair<string, int> >の中の’’は必要です。
#endif
#define MAX_SIZE 100000
pair<string, int> process1, process2;
queue<pair<string, int> > Q;
int main()
{
	int j = 0, sum = 0;
	int n, t, flag = 0;
	cin >> n >> t;
	for (int i = 0; i<n; i++)
	{
		cin >> process1.first >> process1.second;
		Q.push(process1);
	}
	while (!Q.empty()) {
		process2 = Q.front(); Q.pop();
		if (process2.second > t) {
			process2.second -= t;
			sum += t;
			Q.push(process2);
		}
		else {
			sum += process2.second;
			cout << process2.first << " " << sum << endl;
		}
	}
	return 0;
}


