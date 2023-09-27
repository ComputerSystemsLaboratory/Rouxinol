#include <iostream>
#include <sstream>
#include <string>

#if defined SUBLIME
#  define ISTREAM ss
#else
#  define ISTREAM cin
#endif


using namespace std;
int main()
{
	string a;
	#if defined SUBLIME
		string str = "1 + 2 1 * 2 1 - 2 1 / 2 0 ? 0";
		stringstream ss;
		ss << str;
	#endif
	while(true)
	{
		int a, b, ans;
		string op;
		ISTREAM >> a >> op >> b;
		if(op == "?")
		{
			break;
		}
		else if(op == "+")
		{
			ans = a + b;
		}
		else if(op == "-")
		{
			ans = a - b;
		}
		else if(op == "*")
		{
			ans = a * b;
		}
		else
		{
			ans = a / b;
		}
		cout << ans << endl;
	}
}