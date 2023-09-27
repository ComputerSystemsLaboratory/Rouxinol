#include "iostream"
#include "string"
#include <stack>
#include <queue>
#include <sstream>
using namespace std;
void A()
{
	stack<int> stack;
	string str;
	while (cin >> str)
	{
		if (str == "+" || str == "-" || str == "*")
		{
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			int c;
			if (str == "+")
			{
				c = a + b;
			}
			else if (str == "-")
			{
				c = a - b;
			}
			else
			{
				c = a * b;
			}

			stack.push(c);
		}
		else
		{
			int num = stoi(str);
			stack.push(num);
		}
	}

	cout << stack.top() << endl;
}

void B()
{
	queue<string> name;
	queue<int> time;
	int spendTime = 0;
	int N;
	int Q;
	cin >> N;
	cin >> Q;

	cin.ignore();
	string line;
	string s;
	for (int i = 0; i < N;i++)
	{
		getline(cin, line);
		stringstream ss(line);
		ss >> s;
		name.push(s);
		ss >> s;
		time.push(stoi(s));
	}

	while (!time.empty())
	{
		int left = time.front();
		time.pop();
		string n = name.front();
		name.pop();

		if (Q >= left)
		{
			spendTime += left;
			cout << n << " " << spendTime<<endl;
		}
		else
		{
			spendTime += Q;
			time.push(left - Q);
			name.push(n);
		}
	}

	/*while (!name.empty())
	{
		cout << name.front() << endl;
		name.pop();
		cout << time.front() << endl;
		time.pop();
	}*/
}

void C()
{

}

void D()
{

}
int main()
{
	//A();
	B();
	return 0;
}