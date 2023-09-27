#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;


#define abs(N) ((N>0)?N:-1*N)
#define lt(A,B) ((A>B)?B:A)
#define gt(A,B) ((A<B)?B:A)
#define print(S) (cout << S)
#define println(S) (cout << S << endl)

int main(){
	string buf,str;
	char cstr[1000];
	cin.getline(cstr,sizeof(cstr));
	str = string(cstr);
	stringstream ss(str);
	stack<int> st;
	st.push(0);
	while(getline(ss,buf,' ')){
		if(buf=="+" || buf == "-" || buf == "*"){
			int r1,r2,ret;
			r1 = st.top();st.pop();
			r2 = st.top();st.pop();
			if(buf=="+"){
				ret = r1+r2;
			}
			if(buf=="-"){
				ret = r2-r1;
			}
			if(buf=="*"){
				ret = r1*r2;
			}
			st.push(ret);
		}else{
			st.push(atoi(buf.c_str()));
		}
	}
	println(st.top());

	return 0;
}

