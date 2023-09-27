#include<iostream>
#include<stack>
using namespace std;

int main(){
	int in, out;
	stack<int> stk;
	while( cin >> in ){
		
		if(in != 0){
			stk.push(in);
		}else{
			out = stk.top();
			cout << out << endl;
			stk.pop();
		}
	}
	return 0;
}