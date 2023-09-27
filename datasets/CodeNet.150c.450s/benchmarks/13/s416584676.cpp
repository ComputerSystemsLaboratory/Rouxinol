#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int count=0,flag=0,c;
  string s;
  string p;
  cin >> s >> p;

  for(int i=0;i<s.size();i++){
    count=0;
    for(int j=0;j<p.size();j++){
      c = i+j;
      c%=s.size();
      if(s[c]==p[j])count++;       
      else break;
    }
    if(count==p.size()){
      cout<<"Yes"<<endl;
      flag=1;
      break;
    }
    
    
  }
  if(flag==0){
    cout<<"No"<<endl;}
  return 0;
}
    
  