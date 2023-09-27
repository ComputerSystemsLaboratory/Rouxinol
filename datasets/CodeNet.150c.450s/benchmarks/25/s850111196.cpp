#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include <string>
using namespace std;

int main(){
char ch;
int NUM = 26;
int num = 'a';
int sum[NUM];

for ( int i = 0; i < NUM; i++){ 
  sum[i] = 0;
}

while(cin >> ch){
  if(isalpha(ch)){
       if(islower(ch)){//小文字
           sum[ch - 'a']++;
       }
       if(isupper(ch)){//大文字
           sum[ch - 'A']++;
       }
  }
}
for ( int i = 0; i < NUM; i++){ 
  printf("%c : %d\n" , num+i , sum[i] );
}

return 0;
}
