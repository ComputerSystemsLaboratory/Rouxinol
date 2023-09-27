#include <iostream>
#include <stack>
using namespace std;

int main(void){
	int n;
	stack<int> st;
	while(cin >> n){
		if(n==0){
			cout << st.top() << "\n";
			st.pop();
		}else st.push(n);
	}
	return 0;
}