#include<bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main(){
	stack<int> s;
	
	string str;
	while(cin>>str){
		if(str[0] == '+'){
			int t = s.top(); s.pop();
			t += s.top(); s.pop();
			s.push(t);
		}
		else if(str[0] == '-'){
			int t = s.top()*(-1) ; s.pop();
			t += s.top(); s.pop();
			s.push(t);
		}
		else if(str[0] == '*'){
			int t = s.top(); s.pop();
			t *= s.top(); s.pop();
			s.push(t);
		}
		else if(str[0] == '/'){
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			s.push(b/a);
		}
		else{
			s.push(atoi(str.c_str()));  //atoi()?????????????????? 
                                                    //string???c_str():?????????????
		}
	}
	cout<<s.top()<<endl;
	return 0;
}
