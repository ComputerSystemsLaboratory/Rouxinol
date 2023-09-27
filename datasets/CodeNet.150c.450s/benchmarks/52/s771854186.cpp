#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;






int main()
{
	int a;
	stack<int> s;
	while (cin >> a) {
		s.push(a);
		if (s.top() == 0) {
			s.pop();
			cout << s.top() << endl;
			s.pop();
		}
	}
}