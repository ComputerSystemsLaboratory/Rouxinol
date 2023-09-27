#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
  char counter[27]="abcdefghijklmnopqrstuvwxyz";
  string str;
  int num,dat[26],i,x;

  for ( i =0 ; i< 26 ; i++){
    dat[i] = 0;
  }
  while( cin >> str ){
    x = str.size();
    for ( i = 0 ; i < x ; i++){
      if ( isupper(str[i])){
	str[i] = tolower(str[i]);
      }
    int num = str[i] -'a';
    dat[num]++;
    }
  }

  for ( i = 0 ; i < 26 ; i++){
    cout << counter[i] << " : " <<dat[i]<<endl;
  }
  return 0;
}