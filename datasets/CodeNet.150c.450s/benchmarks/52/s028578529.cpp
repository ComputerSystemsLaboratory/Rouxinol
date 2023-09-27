#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

using namespace std;

stack<int> st;
queue<int> qu;
int a;

int main()
{
	while(cin >> a, !cin.eof())
	{
		
		if( a == 0 )
		{
			qu.push(st.top());
			st.pop();
		}
		else
			st.push(a);
	}
	
	while(!qu.empty())
	{
		cout << qu.front() << endl;
		qu.pop();
	}
	
	return 0;
}