#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Stack{
	private:
		int sp;
		int S[200];
	public:
		Stack(){sp=0;}
		bool isFull() const{return (sp==200);}
		bool isEmpty() const{return (sp==0);}
		void push(int d);
		int top();
		void pop();
};
void Stack::pop(){
	if(isEmpty()){
		return;
	}
	sp--;
}
void Stack::push(int d){
	if(isFull()){
		return;
	}
	S[sp++]=d;
}
int Stack::top(){
	if(isEmpty()){
		return -1;
	}
	return S[sp-1];
}

int main(){
	Stack S;
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		int cnt=1;
		int tkr=i;
		int bai=0;
		int ati=0;
		int a=i;
		if(str[i]=='*'){
			int b=S.top();
			S.pop();
			int c=S.top();
			S.pop();
			S.push(b*c);
		}
		else if(str[i]=='+'){
			int b=S.top();
			S.pop();
			int c=S.top();
			S.pop();
			S.push(b+c);
			}
		else if(str[i]=='-'){
			int b=S.top();
			S.pop();
			int c=S.top();
			S.pop();
			S.push(c-b);
		}
		else{
				while(str[tkr+1]!=' '){
					cnt++;
					tkr++;
					i++;
				}
				while(cnt>=1){
					
					bai+=(str[a]-'0')*pow(10,cnt-1);
					cnt--;
					a++;
				}
			S.push(bai);
		}
		i++;
	}
	int ans=S.top();
	cout<<ans<<endl;
	return 0;
}