//itp1_topic9_A
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
char tolower(char);

int main(){
  int count=0;
  string w;
  cin>>w;
  string str;
  while(1){
    cin>>str;
    if(str=="END_OF_TEXT")break;
    for(int i=0;i<(int)str.size();i++){
      str[i]=tolower(str[i]);
    }
    if(str==w){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}

char tolower(char ch){
  if(ch>='A' && ch<='Z'){
    return ch-'A'+'a';
  }
  else return ch;
}

