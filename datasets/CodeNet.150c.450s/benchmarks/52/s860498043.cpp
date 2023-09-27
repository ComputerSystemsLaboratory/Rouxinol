// 2011/06/04 Tazoe

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;

	while(true){
		int n;
		cin >> n;
		if(cin.eof())
			break;

		if(n!=0){
			st.push(n);
		}
		else{
			cout << st.top() << endl;
			st.pop();
		}
	}

	return 0;
}