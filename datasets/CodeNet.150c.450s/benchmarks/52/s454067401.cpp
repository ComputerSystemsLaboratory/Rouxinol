#include <iostream>
#include <stack>
using namespace std;

int main(){
	int in;
	stack<int> st;
	while (cin >> in, !cin.eof()){
		if (in != 0)	st.push(in);
		else{
			cout << st.top() << endl;
			st.pop();
		}
	}
}