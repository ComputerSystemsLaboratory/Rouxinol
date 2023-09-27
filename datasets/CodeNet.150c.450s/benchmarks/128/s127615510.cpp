#include<iostream>
#include<string.h>
using namespace std;

int main(void){

  char word[25];
  int i,length;
  
  cin >> word;
  length = strlen(word);
  
  for(i = length - 1; i >=0; i--){
   cout << word[i];
  }
  
  cout << endl;
  
  return 0;

}