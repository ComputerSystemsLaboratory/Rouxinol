#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
	int a,b,c;
	stack<int> sta;
	string s,t;
	getline(cin,s);
	for(int i = 0;i < s.size();i++){
		if(s[i] == '+'){
			a = sta.top();
			sta.pop();
			b = sta.top();
			sta.pop();
			c = a + b;
			sta.push(c);
		}
		else if(s[i] == '-'){
			a = sta.top();
			sta.pop();
			b = sta.top();
			sta.pop();
			c = b - a;
			sta.push(c);
		}
		else if(s[i] == '*'){
			a = sta.top();
			sta.pop();
			b = sta.top();
			sta.pop();
			c = a * b;
			sta.push(c);
		}
		else if(s[i] == ' ')continue;
		else{
			string t = "";
			for(;i < s.size();i++){
				t += s[i];
				if(i == s.size()-1){
					break;
				}
				if(s[i+1] == ' '){
					break;
				}
			}
			a = atoi(t.c_str());
			sta.push(a);
		}
	}
	cout << sta.top() << endl;

	return 0;
}