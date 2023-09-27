#include <cstdio>
#include <cstdlib>
#include <utility>
#include <typeinfo>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <stack>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;

int main() 
{
	string s;
	stack<int> st;
	while(cin>>s)
	{
	if(s=="+")
	{
		int x = st.top();st.pop();
		int y = st.top();st.pop();
		st.push(x+y);
	}
	else if(s=="-")
	{
		int x = st.top();st.pop();
		int y = st.top();st.pop();
		st.push(y-x);
	}
	else if(s=="*")
	{
		int x = st.top();st.pop();
		int y = st.top();st.pop();
		st.push(x*y);
	}
	else
	{
		int num = 0;
		sscanf(s.c_str(), "%d", &num);
		st.push(num);
	}
	}
	printf("%d\n",st.top());
	
	return 0;
}