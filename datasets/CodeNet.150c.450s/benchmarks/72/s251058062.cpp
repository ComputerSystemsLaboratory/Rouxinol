#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;
char upper(char C){
  if(C>='a'&&C<='z'){
    C-='a'-'A';
  }else if(C>='A'&&C<='Z')
    C+='a'-'A';
  return C;
}
int main(){
  string str;
  vector<string> pri;
  while(cin>>str){
    for(int i=0;i<str.size();i++)
      str[i]=upper(str[i]);
    pri.push_back(str);
  }
  for(int i=0;i<pri.size();i++){
    cout<<pri[i];
    if(i!=pri.size()-1)
      cout<<" ";
  }
  cout<<endl;
  return 0;
}