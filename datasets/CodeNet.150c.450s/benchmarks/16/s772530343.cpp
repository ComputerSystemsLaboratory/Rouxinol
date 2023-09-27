#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <stdexcept>
#include <vector>
using namespace std;


#define abs(N) ((N>0)?N:-1*N)
#define lt(A,B) ((A>B)?B:A)
#define gt(A,B) ((A<B)?B:A)
#define print(S) (cout << S)
#define println(S) (cout << S << endl)


template <typename T>
class stack{
public :
	const static int MAX = 30000;
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

	T body[MAX];
	int pos;
};


int main(){
	char c[20001];
	cin.getline(c,sizeof(c));
	string str = string(c);
	int len = strlen(c);
	char cmd;
	stack<int> st1;
	stack<pair<int,int> > st2;
	int area=0;
	int l;
	for (int i = 0; i < len; ++i) {
		cmd = str[i];
		switch(cmd){
		case '/':
			if(st1.isEmpty()) break;
			l = st1.pop();
			int subarea;
			subarea = (i-l);
//			cout << l << " - " << i << endl;
			while(!st2.isEmpty() && st2.top().first > l){
				pair<int,int> sub = st2.pop();
				subarea += sub.second;
//				cout << "including : " <<  sub.first << "(" << sub.second << ")" <<endl;
			}
//			cout << "subarea is : " <<subarea << endl;
			area += (i-l);
			st2.push(make_pair(l,subarea));
			break;
		case '\\':
			st1.push(i);
			break;
		}
	}
	println(area);
	int pos = 0;
	print(st2.pos);
	while(pos < st2.pos){
		cout << " " << st2.body[pos++].second;
	}
	cout << endl;


	return 0;
}

