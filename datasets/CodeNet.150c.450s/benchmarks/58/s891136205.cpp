#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
//#define MAX_SYMBOL 300//シンボルの最大数
using namespace std;

class SimpleStack{
private	:
	vector<int> v;
public	:

	void put(int n){
		v.push_back(n);
	}

	int pop(){
		int val;
		if(!v.empty()){
			val = *(v.end()-1);
			v.pop_back();
			return val;
		}
	}

};

//&を使って参照渡しにすることでコピーによるメモリ消費を回避できる
//しかも扱いは->でなく.でOK
//http://homepage2.nifty.com/well/Reference.html#PASS_BY_REFERENCE の3
double calc(char q, SimpleStack& ss){
	double a;
	double b;
	if(q == '+'){
		a = ss.pop();
		b = ss.pop();
		ss.put(a + b);
		return a + b;
	}else if(q == '-'){
		a = ss.pop();
		b = ss.pop();
		ss.put(b - a);
		return b - a;//a-bでないことに注意！
	}else if(q == '*'){
		a = ss.pop();
		b = ss.pop();
		ss.put(a * b);
		return a * b;
	}
	return 0;
}

int main(){
	SimpleStack ss;
	char s[100];//1単位
	int num;
	int i = 0;


	while(scanf("%s",s) != EOF){
	
		if(s[0] == '+' || s[0] == '-' || s[0] == '*')calc(s[0],ss);
		else{
			num = atoi(s);
			ss.put(num);
		}
	}
	cout <<ss.pop() <<endl;

	return 0;
}