#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
	stack<int> st;
	queue<int> q;
	int input;

	cin >> input;
	st.push(input);
	while(cin >> input){
		if(input == 0){
			cout << st.top() << endl;
			st.pop();
		}
		else{
			st.push(input);
		}
	}
}