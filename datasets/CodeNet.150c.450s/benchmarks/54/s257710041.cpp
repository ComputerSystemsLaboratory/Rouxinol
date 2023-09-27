#include<iostream>
#include<string>
using namespace std;

int main(){

  string word;
  string str;
  int count = 0;

  getline(cin,word);
  while(1){
    cin >> str;
    if(str== "END_OF_TEXT"){
      break;
    }
    for(int i = 0; i < str.size();i++){
      if(str[i] >= 'A' && str[i] <= 'Z'){
        str[i] += 32;
      }
    }
    if(str == word){
      count++;
    }
  }


  cout << count << endl;
  return 0;
}