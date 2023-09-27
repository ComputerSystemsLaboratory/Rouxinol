#include<iostream>
#include<cstdio>
#include<stack>

using namespace std;

int main(){
	int operation;
	stack<int> s;

	while(cin >> operation){
		if(operation != 0){
                  s.push(operation);
		}  
		else if(operation == 0){
                  cout << s.top() << endl;
		  s.pop(); 
		}
	}
}