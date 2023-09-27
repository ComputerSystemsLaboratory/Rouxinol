#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int n;
	int cnt = 0;
	stack<int> car;
	vector<int> out;

	while (cin >> n){
		if (n == 0){
			out.push_back(cnt);
			out[cnt] = car.top(); // top pop
			car.pop();
			cnt++;
		}
		else {
			car.push(n);
		}
	}

	for (int i = 0; i < cnt; i++){
		cout << out[i] << endl;
	}

	return (0);
}