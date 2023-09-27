#include <bits/stdc++.h>
 
using namespace std;
 
struct Trie{
  bool l;
  Trie *next[4];
 
  Trie(){
    l = false;
    fill(next,next+4,(Trie *)0);
  }
 
  int c(char ch){
    if(ch == 'A'){ return 0; }
    if(ch == 'C'){ return 1; }
    if(ch == 'G'){ return 2; }
    if(ch == 'T'){ return 3; }
    return -1;
  }
 
  void insert(char *s){
    Trie *t = this;
    for(int i = 0 ; i < (int)strlen(s) ; i++){
      int v = c(s[i]);
      if(!t->next[v]){
        t->next[v] = new Trie;
      }
      t = t->next[v];
    }
    t->l = true;
  }
 
  bool find(char *s){
    Trie *t = this;
    for(int i = 0 ; i < (int)strlen(s) ; i++){
      int v = c(s[i]);
      if(!t->next[v]){ return false; }
      t = t->next[v];
    }
    return t->l;
  }
};

int main(){
  int N;
  char c[7],str[13];
  Trie t;
  scanf("%d",&N);
  while(N--){
    scanf("%s%s",c,str);
    if(strcmp(c,"find") == 0){
      printf("%s\n",t.find(str) ? "yes" : "no");
    }else{
      t.insert(str);
    }
  }
  return 0;
}