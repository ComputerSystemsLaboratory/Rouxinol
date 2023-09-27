#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int M = 1000000 + 5;
const int L = 14;

char H[M][L];

int getChar(char c){
  if(c == 'A')return 1;
  else if(c == 'C')return 2;
  else if(c == 'G')return 3;
  else if(c == 'T')return 4;
  else return 0;
}

long long getKey(char str[]){
  int len = strlen(str);
  long long sum = 0,p = 1;
  for(int i = 0;i < len; i++){
    sum += p*getChar(str[i]);
    p *= 5;
  }
  return sum;
}

int h1(int key){
  return key % M;
}

int h2(int key){
  return 1 + (key % (M - 1));
}

void insert(char str[]){
  long long key = getKey(str);
  for(int i = 0;; i++){
    int h = (h1(key) + i*h2(key))%M;
    if(strcmp(H[h],str) == 0)return;
    if(strlen(H[h]) == 0){
      strcpy(H[h],str);
      return ;
    }
  }
  return;
}

bool find (char str[]){
  long long key = getKey(str);
  for(int i = 0;; i++){
    int h = (h1(key) + i*h2(key))%M;
    if(strcmp(H[h],str) == 0)return true;
    else if(strlen(H[h]) == 0)return false;
  }
  return false;
}

int main(){
  int n;
  scanf("%d",&n);
  for(int i = 1;i <= n; i++){
    char s1[8],s2[14];
    scanf("%s%s",s1,s2);
    if(s1[0] == 'i'){
      insert(s2);
    }
    else{
      if(find(s2)){
        printf("yes\n");
      }
      else {
        printf("no\n");
      }
    }
  }
}