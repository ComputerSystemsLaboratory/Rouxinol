#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int chara[26]={0};
  string str;
  string S;
  while(cin>>S){
    str+=S;
  }
  for(int i=0;i<(int)str.size();i++){
    int c=int(tolower(str[i])-'a');
    if(0 <= c && c<26)
      chara[c]++;
  }
  for(int i=0;i<26;i++)
    cout<<char('a'+i)<<" : "<<chara[i]<<endl;
  return 0;
}