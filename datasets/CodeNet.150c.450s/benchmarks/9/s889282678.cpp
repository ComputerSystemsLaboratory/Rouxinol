#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  while(cin>>str,str!="-"){
    int n;
    cin>>n;
    char str2[1300];
    for(int i=0;i<n;i++){
      int shu;
      cin>>shu;
      for(int i=0;i<shu;i++)
	str2[str.size()-shu+i]=str[i];
      for(int i=0;i<str.size()-shu;i++)
	str2[i]=str[shu+i];
      str2[str.size()]='\0';
      str=str2;
    }
   
    cout<<str2<<endl;
  }
  return 0;
}