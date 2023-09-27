#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<climits>
#include<algorithm>
#include<cmath>
#include<utility>
#include<map>
#include<set>
using namespace std;

string s[2];
void init(){
  s[0]=s[1]="";
}

bool input(){
  cin>>s[0]>>s[1];
  return true;
}
//i1 x10 c100 m1000

int add(int tmp,int tmp_c){
  if(tmp==0)tmp++;
  int res=0;
  switch(tmp_c){
    case 'i':
      res+=tmp;
      break;
    case 'x':
      res+=tmp*10;
      break;
    case 'c':
      res+=tmp*100;
      break;
    case 'm':
      res+=tmp*1000;
      break;
  }
  return res;
}


int toINT(string str){
  int res=0;
  char tmp_c=str[str.size()-1];
  int count=0;
  int tmp=0;
  for(int i=str.size()-2;i>=0;i--){
    if(!(str[i]<'0'||'9'<str[i])){
      tmp+=(str[i]-'0')*pow(10,count);
      count++;
    }else{
      res+=add(tmp,tmp_c);
      tmp_c=str[i];
      tmp=0;
      count=0;
    }
  }
  res+=add(tmp,tmp_c);
  return res;
}

string toStr(int n){
  //1 is empty
  if(n==1)return "";
  string res="";
  while(n>0){
    res=char(n%10+'0')+res;
    n/=10;
  }
  return res;
}

string toMCXI(int n){
  string res="";
  if(n>=1000){
    res+=toStr(n/1000);
    res+="m";
  }
  n%=1000;
  if(n>=100){
    res+=toStr(n/100);
    res+="c";
  }
  n%=100;
  if(n>=10){
    res+=toStr(n/10);
    res+="x";
  }
  n%=10;
  if(n>0){
    res+=toStr(n);
    res+="i";
  }
  if(n==0 && res.size()==0){
    res="0";
  }
  return res;
}

string solve(){
  //cout<<s[0]<<" "<<toINT(s[0])<<" "<<s[1]<<" "<<toINT(s[1])<<endl;;
  return toMCXI(toINT(s[0])+toINT(s[1]));
}


int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    init(),input();
    cout<<solve()<<endl;
  }
}