#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int func();
string s;
int p;

int main(){
  getline(cin,s);
  reverse(s.begin(),s.end());
  cout<<func()<<endl;
}

int func(){
  int res;
  if('0'<=s[p]&&s[p]<='9'){
    int num=s[p]-'0'; p++;
    int k=10;
    while('0'<=s[p]&&s[p]<='9') num=num+(s[p]-'0')*k,p++,k*=10;
    p++;
    return num;
  }
  else{
    char c=s[p++];
    p++;
    int a=func(),b=func();
    if(c=='+') return b+a;
    if(c=='-') return b-a;
    return b*a;
  }
}