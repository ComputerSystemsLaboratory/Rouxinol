#include<iostream>
using namespace std;
int t[300];

int change(string &s){
  int res=0,num=0;
  for(int i=0;i<(int)s.size();i++){
    if('0'<=s[i]&&s[i]<='9')num=num*10+(s[i]-'0');
    else{
      if(num==0)num=1;
      res+=num*t[(int)s[i]];
      num=0;
    }
  }
  return res;
}

void change2(int num){
  int a=num/1000;
  if(a>1)cout<<a;
  if(a>0)cout<<'m';
  num%=1000;

  a=num/100;
  if(a>1)cout<<a;
  if(a>0)cout<<'c';
  num%=100;

  a=num/10;
  if(a>1)cout<<a;
  if(a>0)cout<<'x';
  num%=10;

  a=num;
  if(a>1)cout<<a;
  if(a>0)cout<<'i';

  cout<<endl;
}

int main(){
  t[(int)'m']=1000;
  t[(int)'c']=100;
  t[(int)'x']=10;
  t[(int)'i']=1;
  string A,B;
  int Tc;
  cin>>Tc;
  for(int tc=0;tc<Tc;tc++){
    cin>>A>>B;
    int a=change(A);
    int b=change(B);
    change2(a+b);
  }
  
  return 0;
}