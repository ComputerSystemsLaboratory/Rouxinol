#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

int main(void)
{
	int i = 0, sum = 0, k = 0, a, b;
	string s;
	stack<int> S;
	stack<pair<int,int> > A;
	cin >> s;
	while (i != s.size()) {
		switch (s[i]) {
		case '\\':S.push(i); break;
		case '_':i++; continue;
		case '/':
			if (!S.empty()) {
				sum += i - S.top();
				A.push(make_pair(S.top(), i - S.top()));
				S.pop();
			}
		}
		i++;
	}
	cout << sum << endl;
	vector<pair<int,int> > V;
	for (; !A.empty(); ) {
		if (V.empty()) {
			V.push_back(make_pair(A.top().first, A.top().second));
			A.pop();
		}
		else {
			if (A.top().first > V[k].first&&A.top().first + A.top().second < V[k].second + V[k].first) {
				V[k].second += A.top().second;
				A.pop();
			}
			else {
				k++;
				V.push_back(make_pair(A.top().first, A.top().second));
				A.pop();
			}
		}
	}
	if (!V.empty()) {
		cout << k + 1;
		i = 0;
		for (int j = k; j >= 0; j--) {
			cout << " " << V[j].second;
		}
		cout << endl;
	}
	else
		cout << k << endl;
	return 0;
}
