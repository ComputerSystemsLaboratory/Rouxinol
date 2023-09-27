#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	stack<int> s;
	int n;
	while(cin >> n){
		if(n)
			s.push(n);
		else if(n == 0 && !s.empty()){
			cout << s.top() << endl;
			s.pop();
		}
	}

	return 0;
}