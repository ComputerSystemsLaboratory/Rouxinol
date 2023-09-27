#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<math.h>
#include<stack>
#include<sstream>
#include <typeinfo>
#include<sstream>
using namespace std;


int main(){
	stack<string>ope;
	string n;
	int answer=0;
	string mo;

	while(cin>>n){
		if(n=="+"||n=="*"||n=="-"){
			string a=ope.top();
			ope.pop();
			string b=ope.top();
			ope.pop();
			int x=0,y=0;
			stringstream ss;
			ss<<a;
			ss>>x;
			ss.str("");
			ss.clear(std::stringstream::goodbit);
			ss<<b;
			ss>>y;
			if(n=="+"){
				answer=x+y;
			}
			else if(n=="-"){
				answer=y-x;
			}
			else if(n=="*"){
				answer=x*y;
			}
			stringstream s1;
			s1<<answer;
			ope.push(s1.str());
		}
		else ope.push(n);
	}
		cout<<ope.top()<<endl;


	return 0;
}