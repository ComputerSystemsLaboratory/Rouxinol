#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
  int S[100],top=0;
  string s;
  while(cin>>s){
    if(s=="+")
      {S[top-1]+=S[top];--top;}
    else if(s=="-")
      {S[top-1]-=S[top];--top;}
    else if(s=="*")
      {S[top-1]*=S[top];--top;}
    else
      {S[++top]=atoi(s.c_str());}
  }
  cout<<S[top]<<endl;
  return 0;
}