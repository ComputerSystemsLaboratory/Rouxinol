#include<iostream>
#include<string>
using namespace std;


int changeNum(string s){
  int num=0;
  
  for(int i=0;i<s.size();i++){
    if(s[i]=='m'){
      if(i==0||(s[i-1]<'1'&&'9'<s[i-1]))num+=1000;
      else num+=(s[i-1]-'0')*1000;
    }else if(s[i]=='c'){
      if(i==0||(s[i-1]<'1'&&'9'<s[i-1])||s[i-1]=='m')num+=100;
      else num+=(s[i-1]-'0')*100;
    }else if(s[i]=='x'){
      if(i==0||(s[i-1]<'1'&&'9'<s[i-1])||s[i-1]=='m'||s[i-1]=='c')num+=10;
      else num+=(s[i-1]-'0')*10;
    }else if(s[i]=='i'){
      if(i==0||(s[i-1]<'1'&&'9'<s[i-1])||s[i-1]=='m'||s[i-1]=='c'||s[i-1]=='x')num+=1;
      else num+=(s[i-1]-'0');
    }
   
  }
  return num;
}

int main(){
  int num1,num2,ans;
  string s1,s2;
  int Number;

  cin>>Number;
  for(int i=0;i<Number;i++){
    cin>>s1>>s2;

    num1=changeNum(s1);
    num2=changeNum(s2);
    ans=num1+num2;

    if(ans/1000!=0){
      if(ans/1000!=1)cout<<ans/1000<<"m";
      else cout<<"m";
      ans%=1000;
    }
    if(ans/100!=0){
      if(ans/100!=1) cout<<ans/100<<"c";
      else cout<<"c";
      ans%=100;
    }
    if(ans/10!=0){
      if(ans/10!=1)cout<<ans/10<<"x";
      else cout<<"x";
      ans%=10;
    }

    if(ans!=0){
      if(ans!=1)cout<<ans<<"i";
      else cout<<"i";
    }
    
    cout<<endl;
  }
  
  
  return 0;
}