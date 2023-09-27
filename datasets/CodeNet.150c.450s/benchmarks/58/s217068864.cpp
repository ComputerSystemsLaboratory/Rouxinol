#include <bits/stdc++.h>
using namespace std;

int main(){
	stack<long long>st;
	string c;
	while(cin>>c){
		if(c=="+"){
			long long a=st.top();
			st.pop();
			long long b=st.top();
			st.pop();
			st.push(a+b);
		}
		else if(c=="-"){
			long long a=st.top();
			st.pop();
			long long b=st.top();
			st.pop();
			st.push(b-a);
		}
		else if(c=="*"){
			long long a=st.top();
			st.pop();
			long long b=st.top();
			st.pop();
			st.push(a*b);
		}
		else{
			st.push(stoi(c));
		}
	}
	cout<<st.top()<<endl;
	return 0;
}