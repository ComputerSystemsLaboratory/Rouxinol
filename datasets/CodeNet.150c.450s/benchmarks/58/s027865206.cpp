#include <cstdio>
#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define llong long long
#define INF 999999999
#define pb(a) push_back(a)

using namespace std;



vector<string> split(string str, char delim)
{
	vector<string> res;
	size_t current = 0, found;
	while ((found = str.find_first_of(delim, current)) != string::npos)
	{
		string tmp = string(str, current, found - current);
		res.push_back(tmp);
		current = found + 1;
	}
	string tmp = string(str, current, found - current);
	tmp.replace(tmp.size()-1,tmp.size(),"\0");
	res.push_back(string(str, current, str.size() - current));
	return res;
}

int main()
{
	char ch[1000];
	stack<int> st;

	fgets(ch, 1000, stdin);
	vector<string> vec = split(string(ch), ' ');

	REP(i,vec.size())
	{
		if(vec[i].find_first_of("+") != -1)
		{
			int buf1 = st.top();
			st.pop();
			int buf2 = st.top();
			st.pop();
			st.push(buf2 + buf1);
		}
		else if (vec[i].find_first_of("-") != -1)
		{
			int buf1 = st.top();
			st.pop();
			int buf2 = st.top();
			st.pop();
			st.push(buf2 - buf1);
		}
		else if (vec[i].find_first_of("*") != -1)
		{
			int buf1 = st.top();
			st.pop();
			int buf2 = st.top();
			st.pop();
			st.push(buf2 * buf1);
		}
		else if (vec[i].find_first_of("/") != -1)
		{
			int buf1 = st.top();
			st.pop();
			int buf2 = st.top();
			st.pop();
			st.push(buf2 / buf1);
		}
		else
		{
			st.push(atoi(vec[i].c_str()));
		}
	}


	printf("%d\n", st.top());

}