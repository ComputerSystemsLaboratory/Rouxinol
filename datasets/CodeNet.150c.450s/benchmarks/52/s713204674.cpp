#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int a;
	stack<int> car;

	while (cin >> a){

		if (a != 0){
			car.push(a);
		}
		if (a == 0){
			cout << car.top() << endl;
			car.pop();
		}
	}

	return 0;
}