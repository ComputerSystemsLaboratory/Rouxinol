#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define M 1046527
#define NIL (-1)
#define L 14
vector <string> H(M);
int h1(int key){return key % M;}
int h2(int key){return 1 + ( key % (M-1) );}
int getChar(char ch){
  //printf("getchar\n");
  if(ch=='A')return 1;
  else if(ch=='C')return 2;
  else if(ch=='G')return 3;
  else if(ch=='T')return 4;
  else return 0;
}
long long getkey(string s){
  //printf("getkey\n");
  long long sum=0,p=1,i;
  for(int i=0;i<s.length();i++){
    sum+=p*getChar(s[i]);
    p*=5;
  }
  return sum;
}
int insert(string s){
  //printf("insert\n");
  long long key,i,h;
  key=getkey(s);
  for(int i=0;;i++){
    h=(h1(key)+i*h2(key))%M;
    if(H[h]==s)return 1;
    else if(H[h].length()==0){
      H[h]=s;
      return 0;
    }
  }
  return 0;
}

int find(string s){
  //printf("find\n");
  long long key,i,h;
  key=getkey(s);
  for(int i=0;;i++){
    h=(h1(key)+i*h2(key))%M;
    if(H[h]==s)return 1;
    else if(H[h].length()==0)return 0;
  }
  return 0;
}
int main(){
  int n;
  string s1,s2;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    cin >> s1 >> s2;
    if(s1[0]=='i'){insert(s2);}
    else {
      if(find(s2))printf("yes\n");
      else printf("no\n");
    }
  }
  
  return 0;
}