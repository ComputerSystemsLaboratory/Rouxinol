#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
int main(){
	string str;
	stack<int> s;
	while( cin >> str ){
		if( str == "+" ){
			int x = s.top();
					s.pop();
			int y = s.top();
					s.pop();
			s.push(x+y);
			//cout <<x <<" "<<y << endl;
			//cout << s.top() << endl;
		}
		else if( str=="-" ){
			int x = s.top();
					s.pop();
			int y = s.top();
					s.pop();
			s.push(y-x);
			//cout << x <<" "<< y << endl;
			//cout << s.top() << endl;
		}
		else if( str=="*" ){
			int x= s.top();
					s.pop();
			int y= s.top();
					s.pop();
			s.push(y*x);
			//cout << x <<"  " << y<< endl;
			//cout << s.top() << endl;
		}
		else if( str=="/" ){
			int x=s.top();
					s.pop();
			int y=s.top();
					s.pop();
			s.push(y/x);
			//cout <<x << " "<<y<<endl;
			//cout << s.top() << endl;
		}
		else{
			istringstream ss(str);
			int x;
			ss >> x;
			s.push(x);
		}
	}
	cout << s.top() << endl;
	return 0;
}