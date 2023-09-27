#include <iostream>
#include <stack>
using namespace std;

int main(){
	int tmp;
	stack<int>st;
	while(cin>>tmp){
		if(tmp>0){
			st.push(tmp);
		}
		else if(tmp==0){
		cout<<st.top()<<endl;
		st.pop();
		}
	}
}