#include <iostream>
#include <vector>
#include <sstream> 
#include <cstdio>
#include <cstdlib>
#include <string>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iterator>
#include <algorithm>

using namespace std;

#define SIZE 200

std::vector<std::string> split(const std::string &str, char sep)
{
	std::vector<std::string> v;
	std::stringstream ss(str);
	std::string buffer;
	while (std::getline(ss, buffer, sep)) {
		v.push_back(buffer);
	}
	return v;
}

class Stack
{
	int stck[SIZE];
	int tos;
public:
	Stack() { tos = 0; }
	void push(int d);
	int pop();
};

void Stack::push(int d)
{
	if (tos == SIZE) return;		
	stck[tos] = d;
	tos++;
}

int Stack::pop()
{
	if (tos == 0) return 0;
	tos--;
	return stck[tos];
	
}

int main()
{
	Stack st;
	int a, b;
	/*string s;
	getline(cin, s);*/

	//char *g;
	char g1[1000];

	while (scanf("%s", g1) != EOF) {
		switch (g1[0])
		{
		case '+':
			st.push(st.pop() + st.pop());
			break;
		case '-':
			a = st.pop();
			b = st.pop();
			st.push(b - a);
			break;
		case '*':
			st.push(st.pop() * st.pop());
			break;
		default:
			st.push(atoi(g1));
			break;
		}

	}
	
	/*cin >> g1;
	g = strtok(g1, " ");
	cout << g << endl;
	g = strtok(NULL, " ");
	cout << g << endl*/;

	/*vector<string> ss = split(s, ' ');
	std::stoi(ss[0]);*/

	/*for (int i = 0; i < (int)ss.size(); i += 2) {
		switch ()
		{
		case '+':
			st.push(st.pop() + st.pop());
			break;
		case '-':
			a = st.pop();
			b = st.pop();
			st.push(b - a);
			break;
		case '*':
			st.push(st.pop() * st.pop());
			break;
		default:
			st.push(s[i] - 48);
			break;
		}
	}*/
	cout << st.pop() << endl;
	return 0;
}