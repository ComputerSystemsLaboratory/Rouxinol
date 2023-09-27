#include <iostream>

using namespace std;

int main(){
  char str[1201];
  int num[26]={0};
  while(cin >> str){
    for(int i = 0;str[i]!='\0';i++){
      if('a'<=str[i] && str[i]<='z')
        num[str[i]-'a']++;
      if('A'<=str[i] && str[i]<='Z')
        num[str[i]-'A']++;
    }
  }
  for(int i = 0;i < 26;i++)
    cout << (char)('a'+i) << " : " << num[i] << endl;
  return 0;
}