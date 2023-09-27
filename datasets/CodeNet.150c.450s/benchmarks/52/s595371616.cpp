#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
#include <stack>

using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;



int main()
{
	stack<int> st;

	int n;
	while (cin >> n){
		if (n){
			st.push(n);
		}
		else{
			cout << st.top() << endl;
			st.pop();
		}
	}

	return 0;
}