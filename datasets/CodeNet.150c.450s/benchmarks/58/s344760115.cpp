#include<iostream>
#include<stack>
#include<string>
#include<sstream>

using namespace std;

stack<int> Plus(stack<int> st)
{
	int a = st.top();
	st.pop();
	int b = st.top();
	st.pop();
	st.push(b + a);
	return st;
}

stack<int> Minus(stack<int> st)
{
	int a = st.top();
	st.pop();
	int b = st.top();
	st.pop();
	st.push(b - a);
	return st;
}

stack<int> Call(stack<int> st)
{
	int a = st.top();
	st.pop();
	int b = st.top();
	st.pop();
	st.push(b * a);
	return st;
}

stack<int> Judge(stack<int> st,string c)
{ 
	if(c == "+")     st = Plus(st);
	else if(c == "-")st = Minus(st);
	else if(c == "*")st = Call(st);
	return st;
}

int main()
{
	string element;
	stack<int> st;
	while(1){
		cin >> element;
		if(cin.good() == false)break;
		if(element == "+" || element == "-" || element == "*"){
			st = Judge(st,element);
		}
		else{
			stringstream ss;
			ss << element;
			int n;
			ss >> n;
			st.push(n);
		}
	} 
	cout << st.top() << endl;
}