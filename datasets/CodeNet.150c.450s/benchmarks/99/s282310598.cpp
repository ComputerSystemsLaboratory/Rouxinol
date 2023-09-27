#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int mtoi(char c){
  if(c=='m'){
    return 1000;
  }
  if(c=='c'){
    return 100;
  }
  if(c=='x'){
    return 10;
  }
  if(c=='i'){
    return 1;
  }
  return 0;
}

int ctoi(char c){
  if(!mtoi(c)){
    return c-'0';
  }
  return 0;
}

int toi(string s){
  int sum=0;
  for(int i=0;i<s.size();i++){
    if(mtoi(s[i])){
      if(i==0){
        sum+=mtoi(s[i]);
      }else{
        if(ctoi(s[i-1])){
          sum+=mtoi(s[i])*ctoi(s[i-1]);
        }else{
          sum+=mtoi(s[i]);
        }
      }
    }
  }
  return sum;
}

string itom(int a){
  string s;
  if(a/1000==1){
    s+='m';
  }
  else{
    if(a/1000!=0){
      s+=(char)('0'+a/1000);
      s+=('m');
    }
  }
  if(a/100%10==1){
    s+=('c');
  }
  else{
    if(a/100%10!=0){
      s+=(char)('0'+a/100%10);
      s+=('c');
    }
  }
  if(a/10%10==1){
    s+=('x');
  }else{
    if(a/10%10!=0){
      s+=(char)('0'+a/10%10);
      s+=('x');
    }
  }
  if(a%10==1){
    s+=('i');
  }
  else{
    if(a%10!=0){
      s+=(char)('0'+a%10);
      s+=('i');
    }
  }
  return s;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s,t;
    cin>>s>>t;
    //printf("seisuu=%d %d\n",toi(s),toi(t));
    cout<<itom( toi(s)+toi(t))<<endl;
  }
  return 0;
}

