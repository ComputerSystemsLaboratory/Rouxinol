#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack<int> s;
	int k;
	while (cin >> k){
		if (0 == k){
			k = s.top();
			s.pop();
			cout << k << "\n";
		}
		else s.push(k);
	}
	return 0;
}