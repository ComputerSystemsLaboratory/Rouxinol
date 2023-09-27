#include<iostream>

using namespace std;



int main(){
  char str[20];
  int i;
  cin >> str;
  
  for(i=0;str[i]!='\0';i++);
  for(i=i-1;i>=0;i--){
    cout << str[i];
  }
  cout << endl;
}