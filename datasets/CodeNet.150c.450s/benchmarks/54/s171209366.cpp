//topic9a.cpp
#include<bits/stdc++.h>
using namespace std;

char tolower(char ch){
  if( 'A' <= ch && ch <= 'Z' ){
    return ch-'A'+'a';
  }else{
    return ch;
  }
}

int main(){
  int count=0;
  string W;
  cin>>W;
  for(int i=0;i<(int)W.size();i++){
    W[i]=tolower(W[i]);
  }
  string str;
  while(1){
    cin>>str;
    if(str=="END_OF_TEXT")break;
    for(int i=0;i<(int)str.size();i++){
      str[i]=tolower(str[i]);
    }
    if(str==W){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}

