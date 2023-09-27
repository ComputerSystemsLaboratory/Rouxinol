#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
	int N;
	stack<int> st;
	while( cin >> N )
	{
		if( N == 0 ){
			cout << st.top() << endl;
			st.pop();
			continue;
		}
		st.emplace( N );
	}
	return 0;
}