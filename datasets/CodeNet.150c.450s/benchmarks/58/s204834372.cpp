#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main(){
	string s;
	int b,c,d;
	stack<int> a;
	
	while(cin>>s){
		
		if(s=="+"){
			c=a.top();
			a.pop();
			d=a.top();
			a.pop();
			a.push(c+d);
		}else if(s=="-"){
			c=a.top();
			a.pop();
			d=a.top();
			a.pop();
			a.push(d-c);
		}else if(s=="*"){
			c=a.top();
			a.pop();
			d=a.top();
			a.pop();
			a.push(c*d);
		}else{
		
		b=stoi(s);
		
		a.push(b);
		
		}
		
	}
	
	cout<<a.top()<<endl;
	
	return 0;
}