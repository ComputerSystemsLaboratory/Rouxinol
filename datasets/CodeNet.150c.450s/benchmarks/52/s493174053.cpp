
#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> st;

	while( 1 ){
		int inout;
		cin >> inout;
		if(cin.eof()) break;

		if(inout == 0){
			cout << st.top() << endl;
			st.pop();
		}else{
			st.push(inout);
		}
	}
	return 0;
}