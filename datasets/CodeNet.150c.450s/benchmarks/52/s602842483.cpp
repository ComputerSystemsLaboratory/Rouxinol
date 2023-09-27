#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int n;
	stack<int> car;
	vector<int> out;

	while (cin >> n){
		if (n == 0){
			out.push_back(car.top());
			car.pop();
		}
		else {
			car.push(n);
		}
	}

	for (int i = 0; i < out.size(); i++){
		cout << out[i] << endl;
	}

	return (0);
}