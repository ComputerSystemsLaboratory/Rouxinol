#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

#define LEN 1046527
#define NIL (-1)
#define L 14

using namespace std;

char H[LEN][L];

int getChar(char ch){
  if(ch == 'A') return 1;
  if(ch == 'C') return 2;
  if(ch == 'G') return 3;
  if(ch == 'T') return 4;
  return 0;
}

long long getKey(char str[]){
  long long sum = 0, p = 1, i;
  for(i = 0; i< strlen(str); i++){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}

long long h1(long long key){
  return key % LEN;
}

long long h2(long long key){
  return 1 + (key % (LEN -1));
}

int find(char str[]){
  long long key, i, h;
  key = getKey(str);
  for(i=0;;i++){
    h = (h1(key) + i * h2(key)) % LEN;
    if(strcmp(H[h], str) == 0) return 1;
    if(strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int insert(char str[]){
  long long key, i, h;
  key = getKey(str);
  for(i = 0; ; i++){
    h = (h1(key) + i * h2(key)) % LEN;
    if(strcmp(H[h], str) == 0) return 1;
    if(strlen(H[h]) == 0){
      strcpy(H[h], str);
      return 0;
    }
  }
  return 0;
}

int main(int argc, const char * argv[]) {
  int i, n;
  char str[L], com[9];
  
  for(i = 0; i < LEN; i++){
    H[i][0] = '\0';
  }
  cin >> n;
  
  for(i = 0; i < n; i++){
    cin >> com >> str;
    
    if(com[0] == 'i'){
      insert(str);
    }else{
      if(find(str)){
        cout << "yes" << endl;
      }else{
        cout << "no" << endl;
      }
    }
  }
  
  return 0;
}

