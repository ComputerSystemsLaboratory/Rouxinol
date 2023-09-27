#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<string>
#include<cstdlib>
//#include<cmath>
using namespace std;

typedef struct {
	string s;
	int t;
}Unit;

int main(void)
{
	int n, q, T = 0;
	Unit p;
	cin >> n >> q;
	queue<Unit>A;
	for (int i = 0; i < n; i++) {
		cin >> p.s >> p.t;
		A.push(p);
	}
	while (!A.empty()) {
		if (A.front().t <= q) {
			T += A.front().t;
			cout << A.front().s << " " << T << endl;
			A.pop();
		}
		else {
			T += q;
			A.front().t -= q;
			A.push(A.front());
			A.pop();
		}
	}
	return 0;
}
