#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string intTostring(int num){
  stringstream ss;
  ss<<num;
  return ss.str();
}

int mcxiToint(string str){
  int num=0;
  int loop=0;
  for(int i=(int)str.size()-1;i>=0;i--){
    if(str[i]=='i') loop=1;
    if(str[i]=='x') loop=10;
    if(str[i]=='c') loop=100;
    if(str[i]=='m') loop=1000;
    num+=loop;
    if('2'<=str[i] && str[i] <= '9'){
      num+=loop*(str[i]-'2');
    }
  }
  return num;
}

string intTomcxi(int num){
  string str="";
  if(num>=2000){
    str+=intTostring(num/1000)+"m";
    num=num%1000;
  }else if(num >=1000){
    str+="m";
    num=num%1000;
  }
  if(num>=200){
    str+=intTostring(num/100)+"c";
    num=num%100;
  }else if(num >=100){
    str+="c";
    num=num%100;
  }
  if(num>=20){
    str+=intTostring(num/10)+"x";
    num=num%10;
  }else if(num >=10){
    str+="x";
    num=num%10;
  }
  if(num>=2){
    str+=intTostring(num)+"i";
  }else if(num >=1){
    str+="i";
  }
  return str;

}

int main(){
  int n;
  cin>>n;
  while(n--){
    string s1,s2;
    cin>>s1>>s2;
    //    cout<<mcxiToint(s1)<<" "<<mcxiToint(s2)<<endl;
    cout<<intTomcxi(mcxiToint(s1)+mcxiToint(s2))<<endl;
  }
  return 0;
}