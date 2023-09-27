#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
using namespace std;

void split(const string str,vector<string>&in){
	in.push_back("");
	int index=0;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			in.push_back("");
			index++;
		}else  in[index]+=str[i];
	}
}

int main(){
	int a,b;
	stack<int> st;
	vector<string> in;
	string str;
	getline(cin,str);
	split(str,in);
	for(int i=0;i<in.size();i++){
		if(in[i][0]=='+'){
			a=st.top();
			st.pop();
			b=st.top();
			st.pop();
			st.push(a+b);
		}else if(in[i][0]=='*'){
			a=st.top();
			st.pop();
			b=st.top();
			st.pop();
			st.push(a*b);
		}else if(in[i][0]=='-'){
			a=st.top();
			st.pop();
			b=st.top();
			st.pop();
			st.push(b-a);
		}else  st.push(atoi(in[i].c_str()));
	}
	cout<<st.top()<<endl;
	return 0;
}
