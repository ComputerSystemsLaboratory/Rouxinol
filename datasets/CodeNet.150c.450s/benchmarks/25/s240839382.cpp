//itp1_8-c
#include <iostream>
#include <vector>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
 vector<int> cnt(26,0); 
 char ch;
 while(scanf("%c",&ch)!=EOF){
  if(islower(ch)) cnt[int(ch-'a')]+=1;
  else if(isupper(ch)) cnt[int(ch-'A')]+=1;
 }

 for(int i=0;i<26;i++)
  printf("%c : %d\n",i+97,cnt[i]);
 
 return 0;
}