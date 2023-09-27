#include <cstdlib>
#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main(){
	string word;
	stack <int> S;
	int i,j;
	while (cin >> word){
		if (word == "+"){
			i = S.top();
			S.pop();
			j = S.top();
			S.pop();
			S.push(i + j);
		
		}
			
		else if (word == "-"){
			i = S.top();
			S.pop();
			j = S.top();
			S.pop();
			S.push(j - i);
		
		}
			
		else if (word == "*"){
			i = S.top();
			S.pop();
			j = S.top();
			S.pop();
			S.push(i * j);
		
		}
		else{
			int k = atoi(word.c_str());
			S.push(k);
		}
	}
	cout << S.top() << endl;
}		