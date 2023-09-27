#include<iostream>
#include<stack>
#include<string>
#include <cstdlib>
int main(){
	std::stack<int> s;
	std::string b;
	int bu;
	while(std::cin>>b){
		if(b=="+"){
			bu=s.top();
			s.pop();
			s.top()+=bu;
		}
		else if(b=="-"){
			bu=s.top();
			s.pop();
			s.top()=s.top()-bu;
		}
		else if(b=="*"){
		    bu=s.top();
			s.pop();
			s.top()*=bu;	
		}
		else{
			s.push(std::atoi( b.c_str() ));
		}
	}
	std::cout<<s.top()<<"\n";
	return 0;
}