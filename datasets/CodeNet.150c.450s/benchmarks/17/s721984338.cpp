#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <queue>
#include <cmath>
#include <stack>

#define int64 long long int

using namespace std;

int main()
{
	int i, n;
	priority_queue<int> qu;

	for(i=0; i<5; i++) {
		cin >> n;
		qu.push(n);
	}
	for(i=0; i<5; i++) {
		cout << qu.top();
		qu.pop();
		if(i != 4) cout << ' ';
		else cout << '\n';
	}
	return 0;
}