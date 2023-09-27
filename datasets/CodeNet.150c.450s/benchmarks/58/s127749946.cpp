#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
#include <stack>
using namespace std;
#define len(n) (int)n.length()
#define dump cout
#define pb push_back
#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	
	string str;
	stack<ll> st;
	while (cin >> str)
	{
		if ((str == "*") || (str == "-") || (str == "+"))
		{
			ll tmp1 = st.top(); st.pop();
			ll tmp2 = st.top(); st.pop();
					ll ans = 0;
			if(str == "*")
			{
				ans = tmp1 * tmp2;
			}
			if(str == "-")
			{
				ans = (-1 * tmp1) + tmp2;
			}
			if(str == "+")
			{
				ans = tmp1 + tmp2;
			}

			st.push(ans);
		}
		else
		{
			st.push(atoll(str.c_str()));
		}
	}
	
	cout << st.top() << endl;
	
	return 0;
}