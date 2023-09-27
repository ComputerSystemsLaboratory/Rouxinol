#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<int> S;
	string word;

	while(cin >> word){	//??\???????????????????¶???????
		if(word == "+"){
			int i = S.top();
			S.pop();
			int j = S.top();
			S.pop();
			S.push(j+i);
		}else if(word == "-"){
			int i = S.top();
			S.pop();
			int j = S.top();
			S.pop();
			S.push(j-i);
		}else if(word == "*"){
			int i = S.top();
			S.pop();
			int j = S.top();
			S.pop();
			S.push(j*i);
		}
		else{
			int num = stoi(word);
			S.push(num);
		}
	}

	int ans = S.top();
	cout << ans << endl;

	return 0;
}