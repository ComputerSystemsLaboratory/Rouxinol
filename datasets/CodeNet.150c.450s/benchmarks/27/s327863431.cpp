#include<bits/stdc++.h>
using namespace std;



#define bstN 500000


int size;
int t[bstN];
int lc[bstN];
int rc[bstN];
  
  

  
void insert(int v){
  int i=0;
  while(i<size){
    int& child=(v<t[i]?lc[i]:rc[i]);
    if(child==-1)child=size;
    i=child; 
  }
  lc[size]=rc[size]=-1;
  t[size++]=v;
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





int main(){

  int n,a;
  char str[100];
  scanf("%d",&n);
  
  while(n--){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&a);
      insert(a);
    }else{
      preord(0);
      printf("\n");
      inord(0);
      printf("\n");
    }
  }

  return 0;
}