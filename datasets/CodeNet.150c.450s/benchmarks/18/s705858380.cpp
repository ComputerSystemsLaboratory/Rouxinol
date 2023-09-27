#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
 int n, i, sum = 100000, count;
 cin >> n;
 for(i = 0;i < n;i++){
  sum = sum * 1.05;
  if(sum % 1000 != 0){
  sum = sum / 1000;
  sum = sum + 1;
  sum = sum * 1000;
  }
 }
 
 cout << sum << endl;

 return 0; 
}