#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st;
	int num;
	while(true){
		cin>>num;
		if(cin.eof()){ break; }
		else if(num == 0){
			cout<<st.top()<<endl; 
			st.pop();
		}
		else{ st.push(num); }
	}
	return 0;
}