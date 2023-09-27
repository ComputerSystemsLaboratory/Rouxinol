#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

inline bool isdigit(char a){
	if(a>='0' && a<='9') return true;
	return false;
}


int main(){
	int n,m,num,ans=0;
	string s;
	stack<int> st;
	stack<int> tmp;
	getline(cin , s);
	for(int i=0;i<s.size();++i){
		if (isdigit(s[i])){
			while(s[i]!=' ' && s[i]!=0){
				num=(int)(s[i]-'0');
				tmp.push(num);
				i++;
			}
			num=0,m=1;
			while(!tmp.empty()){
				num+=tmp.top()*m;
				m*=10;
				tmp.pop();
			}
			st.push(num);
			i--;
		} else if (s[i]=='+' || s[i]=='-' || s[i]=='*'){
			if(s[i]=='+'){
				n=st.top();
				st.pop();
				n+=st.top();
				st.pop();
				st.push(n);
			} else if(s[i]=='-'){
				n=st.top();
				st.pop();
				n-=st.top();
				st.pop();
				st.push(-n);
			} else if(s[i]=='*') {
				n=st.top();
				st.pop();
				n*=st.top();
				st.pop();
				st.push(n);
			}
		} else if(s[i]==' '){
			continue;
		}
	}
	cout << st.top() << endl;
	return 0; 
}