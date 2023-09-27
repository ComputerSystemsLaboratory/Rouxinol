#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <stdexcept>
using namespace std;


#define abs(N) ((N>0)?N:-1*N)
#define lt(A,B) ((A>B)?B:A)
#define gt(A,B) ((A<B)?B:A)
#define print(S) (cout << S)
#define println(S) (cout << S << endl)

template <typename T>
class stack{
public :
	const static int MAX = 10000;
	stack<T> (){
		pos = 0;
	}

	void empty(){
		pos = 0;
	}

	bool isEmpty(){
		return (pos == 0);
	}

	bool isFull(){
		return (pos == MAX);
	}

	T pop(){
		if(isEmpty()){
			throw exception();
		}
		return body[--pos];
	}

	void push(T el){
		if(isFull()){
			throw exception();
		}
		body[pos++] = el;
	}

	T top(){
		if(isEmpty()){
			throw exception();
		}
		return body[pos-1];
	}

private:
	T body[MAX];
	int pos;
};

int main(){
	string buf,str;
	char cstr[1000];
	cin.getline(cstr,sizeof(cstr));
	str = string(cstr);
	stringstream ss(str);
	stack<int> st;
	while(getline(ss,buf,' ')){
//		println("-----"+buf+"-----");
		if(buf=="+" || buf == "-" || buf == "*"){
			int r1,r2,ret;
			r1 = st.pop();
			r2 = st.pop();
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

