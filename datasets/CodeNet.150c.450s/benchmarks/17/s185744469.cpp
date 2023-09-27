#define _USE_MATH_DEFINES
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
using namespace std;

int main(){
	priority_queue<int> q;
	for (int i = 0; i < 5; ++i) {
		int a;
		cin >> a;
		q.push(a);
	}
	for (int i = 0; i < 5; ++i) {
		cout << q.top();
		if (i != 4) cout << ' ';
		q.pop();
	}
	cout << endl;
	return 0;
}