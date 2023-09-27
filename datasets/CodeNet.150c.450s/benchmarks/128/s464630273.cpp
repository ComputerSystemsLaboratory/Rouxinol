#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
 string str1, str2;
 int i;
 cin >> str1;
 for(i = 0;i < str1.size();i++){
  str2[i] = str1[str1.size() - i - 1];
 }
 for(i = 0;i < str1.size();i++){
  cout << str2[i];
 }
 cout << endl;
 return 0; 
}