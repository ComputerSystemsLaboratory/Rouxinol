#include<iostream>
#include<string>
using namespace std;
int main(){
  string str,s;
  int cnt=0;
  cin >> s;
  for(int i=0,l=s.size();i<l;i++)
    if(s[i]>='A'&&s[i]<='Z')s[i]+=('a'-'A');
  while(cin >> str){
    if(str=="END_OF_TEXT")break;
    for(int i=0,l=str.size();i<l;i++)
      if(str[i]>='A'&&str[i]<='Z') str[i]+=('a'-'A');
    if(s==str) cnt++;
  }
  cout << cnt << endl;
}
