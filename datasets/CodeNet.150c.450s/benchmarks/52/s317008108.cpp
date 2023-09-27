#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
	int n;
	int pop_car[1024];
	int cnt = 0;
	stack<int> car;

	while (cin >> n){
		if (n == 0){
			pop_car[cnt] = car.top(); // top pop
			car.pop();
			cnt++;
		}
		else {
			car.push(n);
		}
	}

	for (int i = 0; i < cnt; i++){
		cout << pop_car[i] << endl;
	}

	return (0);
}