#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cctype>
#include <cstdio>
#include<string>
using namespace std;

int main(){
   int alp[26]={};
   string str;

   while(getline(cin,str)){
      for(int i=0;i<str.size();i++){
         if(str[i]>='a'&&str[i]<='z') alp[str[i]-'a']++;
         else if(str[i]>='A'&&str[i]<='Z') alp[str[i]-'A']++;
      }
   }

   for(int i=0;i<26;i++){
      printf("%c : %d\n",(char)('a'+i),alp[i]);
   }

   return 0;
}

