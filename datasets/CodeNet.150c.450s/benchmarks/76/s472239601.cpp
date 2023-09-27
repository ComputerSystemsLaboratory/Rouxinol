#include<bits/stdc++.h>
using namespace std;

#define bstN 500000
struct bst{
  int size;
  int t[bstN];
  int lc[bstN];
  int rc[bstN];
   
  void init(){
    size=0;
  }
   
  void insert(int v){
    int i=0;
    while(0<=i&&i<size){
      int& child=(v<t[i]?lc[i]:rc[i]);
      if(child==-1)child=size;
      i=child; 
    }
    lc[size]=rc[size]=-1;
    t[size++]=v;
  }

  bool find(int v){
    int i=0;
    while(0<=i&&i<size){
      if(t[i]==v)return true;
      i=(v<t[i]?lc[i]:rc[i]);      
    }
    return false;
  }
  
  void preord(int pos){
    if(pos==-1||pos==size)return;
    preord(lc[pos]);
    printf(" %d",t[pos]);
    preord(rc[pos]);
  }
   
  void inord(int pos){
    if(pos==-1||pos==size)return;
    printf(" %d",t[pos]);
    inord(lc[pos]);
    inord(rc[pos]);
  }
};
 
 
bst T;
 
int main(){
  T.init();
  int n,a;
  char str[100];
  scanf("%d",&n);
   
  while(n--){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&a);
      T.insert(a);
    }else if(str[0]=='f'){
      scanf("%d",&a);
      if(T.find(a))printf("yes\n");
      else printf("no\n");      
    }else{
      T.preord(0);
      printf("\n");
      T.inord(0);
      printf("\n");
    }
  }
 
  return 0;
}