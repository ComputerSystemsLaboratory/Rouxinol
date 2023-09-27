// topic8a
#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string str;
   
  //空白も含めて1行まるごとを文字列として受け取るためにはgetline関数を使う
  getline(cin,str);
 
  for(int i=0;i<(int)str.size();i++){
    if('a'<=str[i]&&str[i]<='z'){
      str[i]=str[i]-'a'+'A';
    }else if('A'<=str[i]&&str[i]<='Z'){
      str[i]=str[i]-'A'+'a';
    }
  }
  cout<<str<<endl;
  return 0;
}
