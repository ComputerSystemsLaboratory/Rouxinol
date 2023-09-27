#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string str;
	stack<string> s;
	int a, b;

	while (1)
	{
		cin >> str;
		if (cin.eof() == true){
			break;
		}
		else{
			s.push(str);
			if (s.top() == "+"){
				s.pop();
				a = stoi(s.top());
				s.pop();
				b = stoi(s.top());
				s.pop();
				s.push(to_string(b + a));
			}
			if (s.top() == "-"){
				s.pop();
				a = stoi(s.top());
				s.pop();
				b = stoi(s.top());
				s.pop();
				s.push(to_string(b - a));
			}
			if (s.top() == "*"){
				s.pop();
				a = stoi(s.top());
				s.pop();
				b = stoi(s.top());
				s.pop();
				s.push(to_string(b * a));
			}
		}
	}

	cout << s.top() << endl;

	return 0;
}