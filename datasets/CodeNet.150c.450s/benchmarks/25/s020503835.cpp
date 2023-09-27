#include<iostream>
#include<cctype>
using namespace std;
int main(){
  char ch,c;
  int counter[26]={0},num;
  while(cin >>ch){
    c=tolower(ch);
  num =c-'a';  
  if(isalnum(ch))counter[num]++;}

  for(int i=0;i<26;i++) cout<<(char)('a'+i)<<" : "<<counter[i]<<endl;
  return 0;
}
    