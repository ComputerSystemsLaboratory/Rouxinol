#include<iostream>
#include<string>

using namespace std;

int tode(char c){
  switch(c){
    case 'm' : return 1000;
    case 'c' : return 100;
    case 'x' : return 10;
    case 'i' : return 1;
  }
}
int toint(string str){
  int sum = 0;
  for(int i = 0 ; i < str.size() ; i ++){
    if('2'<=str[i] && str[i]<='9'){
      sum += (str[i]-'0') * tode(str[i+1]);
      i++;
    }else{
      sum += tode(str[i]);
    }
  }
  return sum;
}


void tore(int num){
  if(num>=1000){
    if(num/1000!=1)cout<<num/1000;
    cout<<"m";
    num = num % 1000;
  }
  if(num>=100){
    if(num/100%10!=1)cout<<num/100%10;
    cout<<"c";
    num = num % 100;
  }
  if(num>=10){
    if(num/10%10!=1)cout<<num/10%10;
    cout<<"x";
    num = num % 10;
  }
  if(num>=1){
    if(num%10!=1)cout<<num%10;
    cout<<"i";
  }
  cout<<endl;
}

int main(void){
  int n;
  cin>>n;
  for(int i = 0 ; i < n ; i ++){
    string str1,str2;
    cin>>str1>>str2;
    //cout<<toint(str1)+toint(str2)<<endl;
    tore(toint(str1)+toint(str2));
  }
}