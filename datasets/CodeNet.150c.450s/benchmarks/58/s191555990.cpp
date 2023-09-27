#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> sc;
  string c;
  int n1,n2,num=0,ten;
  while(cin>>c){
    num=0;
    if(c=="+"){
      n1=sc.top();
      sc.pop();
      n2=sc.top();
      sc.pop();
      sc.push(n1+n2);
    }else if(c=="-"){
      n2=sc.top();
      sc.pop();
      n1=sc.top();
      sc.pop();
      sc.push(n1-n2);
    }else if(c=="*"){
      n1=sc.top();
      sc.pop();
      n2=sc.top();
      sc.pop();
      sc.push(n1*n2);
    }else{
      for(int i=(c.size()-1);i>=0;i--){
	ten=1;
	for(int j=i;j<c.size()-1;j++){
	  ten=ten*10;
	}
	num+=(c[i]-'0')*ten;
      }
      sc.push(num);
    }
  }
  cout<<sc.top()<<endl;
  return 0;
}