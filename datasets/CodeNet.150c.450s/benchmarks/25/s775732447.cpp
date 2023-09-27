#include<iostream>
#include<cctype>
using namespace std;

int main(){
  char ch;
  int count[26] = {0};
  int i;

  while(cin >> ch){
    count[tolower(ch) - 'a']++;
  }
  for(i = 0; i < 26; i++){
    cout << (char)(i + 'a') << " : " << count[i] << endl;
  }
  return 0;
}