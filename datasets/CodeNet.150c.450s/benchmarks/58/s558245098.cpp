#include <stack>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{

	std::stack<int> s;
	int i, j, out, num=0,num1;
	string in;
	
	while(cin >> in){
	  if((int)in[0]>='0'&&(int)in[0]<='9'){
	    stringstream ss;
	    ss << in;
	    ss >> num;
	    s.push(num);
	  }
	    
	  if((int)in[0]=='+'){
	    num = 0;
	    num = s.top();
	    s.pop();
	    num += s.top();
	    s.pop();
	    s.push(num);
	  }
	  else if((int)in[0]=='-'){
	    num = 0;
	    num = s.top();
	    s.pop();
	    num1 = s.top();
	    s.pop();
	    s.push(num1-num);
	  }
	  else if((int)in[0]=='*'){
	    num = 0;
	    num = s.top();
	    s.pop();
	    num *= s.top();
	    s.pop();
	    s.push(num);
	  }
	}

	cout << s.top() << "\n";

	return 0;
}