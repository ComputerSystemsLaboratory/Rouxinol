#include<iostream>
#include<cstring>
#include<cstdio>
#include<cctype>
using namespace std;

int main(){
  int counter[26] = {};
  char ch;

  for (; cin >> ch;){

    int num = tolower(ch) - 'a';
    if(0 <= num && num <= 25){
      counter[num] += 1;
    }
  }

  for (int i = 0; i <= 25; i++){
    char al = i + 'a';
    cout << al << " : " << counter[i] << endl;
  }

  return 0;
}