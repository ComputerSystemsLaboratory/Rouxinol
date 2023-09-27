#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include <string>
using namespace std;

int main(){
string number;
int sum;
while(1){
sum = 0;


//while(1){
cin >> number;
//scanf("%s",&number);
//if(number == '\n')break;
//}

if(number[0] == '0' && number.size() == 1)break;

for ( int i = 0; i < number.size(); i++ ){ 
  sum += number[i] - '0';
  number[i] = '0';
}
cout << sum << endl;
}
return 0;
}
