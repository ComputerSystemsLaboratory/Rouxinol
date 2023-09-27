#include<iostream>
#include<string>
using namespace std;
char upper(char C){
  if(C>='A'&&C<='Z')
    C=C+'a'-'A';
  return C;
}
int main(){
  int num[26]={0};
  char alfa[26]={0};
  for(int i=0;i<26;i++)
    alfa[i]='a'+i;
  string str;
  while(cin>>str){
    for(int i=0;i<str.size();i++){
      str[i]=upper(str[i]);
      if(str[i]<='z'&&str[i]>='a')
	num[str[i]-'a']++;
    }
  }
  for(int i=0;i<26;i++){
    cout<<alfa[i]<<" "<<':'<<" "<<num[i];
    if(i!=26)
      cout<<endl;
  }
  return 0;
}