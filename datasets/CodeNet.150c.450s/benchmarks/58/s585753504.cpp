#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> t;
  string s;
  int a,b,c;
  while(cin>>s){
    if('0'<=s[0]&&s[0]<='9'){
      if(s.size()>=2){
	a=s.size();
	b=1;
	for(int i=0;i<a-1;i++)b*=10;
	c=0;
	for(int i=0;i<a;i++){
	  c+=(s[i]-'0')*b;b/=10;	  
	}
	t.push(c);
      }
      else t.push(s[0]-'0');
    }
    else if(s=="+"){
      a=t.top();t.pop();
      b=t.top();t.pop();
      t.push(a+b);
    }
    else if(s=="-"){
      a=t.top();t.pop();
      b=t.top();t.pop();
      t.push(b-a);
    }
    else if(s=="*"){
      a=t.top();t.pop();
      b=t.top();t.pop();
      t.push(a*b);     
    }
  }
  cout <<t.top()<<endl;
  return 0;
}