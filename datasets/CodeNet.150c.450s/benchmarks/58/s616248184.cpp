#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include <sstream>

#include<stack>

using namespace std;

template < typename T > std::string to_string(const T& n)
{
	std::ostringstream stm;
	stm << n;
	return stm.str();
}

std::string ConvIntToStr(int checkNum)
{
	return to_string(checkNum);
}

int ConvStrToIntChar(const char c)
{
	if ('0' <= c && c <= '9') return (c - '0');
	return -1;
}

int ConvStrToInt(std::string checkStr)
{
	//const char *tmp = checkStr.c_str();
	//return ConvStrToIntChar(*tmp);
	return atoi(checkStr.c_str());
}


vector<string> SplitStr(const string& s, char delim) {
	vector<string> elems;
	stringstream ss(s);
	string item;
	while (getline(ss, item, delim))
	{
		if (!item.empty()) {
			elems.push_back(item);
		}
	}
	return elems;
}


string Calc(string a, string b, string kigou)
{
	if (kigou == "+")
	{
		return ConvIntToStr(ConvStrToInt(a) + ConvStrToInt(b));
	}
	if (kigou == "-")
	{
		return ConvIntToStr(ConvStrToInt(b) - ConvStrToInt(a));
	}
	if (kigou == "*")
	{
		return ConvIntToStr(ConvStrToInt(a) * ConvStrToInt(b));
	}
	return "";
}

int main() {

	string problem = "";
	getline(cin, problem);

	vector<string> vSplitStr = SplitStr(problem, ' ');

	stack<string> vStack;
	while (vStack.size() != 1)
	{

		for (int i = 0; i < vSplitStr.size(); ++i)
		{
			if (vSplitStr[i] == "+" || vSplitStr[i] == "-" || vSplitStr[i] == "*")
			{
				// いずれかの数式記号だった
				string a = vStack.top();
				vStack.pop();
				string b = vStack.top();
				vStack.pop();
				string tmp = Calc(a, b, vSplitStr[i]);
				vStack.push(tmp);
			}
			else
			{
				// 数値
				vStack.push(vSplitStr[i]);
			}
		}
	}

	cout << vStack.top() << endl;
	return 0;
}

