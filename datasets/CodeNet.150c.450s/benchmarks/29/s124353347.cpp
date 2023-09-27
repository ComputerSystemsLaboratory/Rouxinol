#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<list>

#define REP(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;



int main(){
  list<int> il;
  char command[20];
  int n;
  int key;
  scanf("%d",&n);
  REP(i,n){
    scanf("%s",command);
    if(command[0] == 'i'){  //insert
      scanf("%d",&key);
      il.push_front(key);
    }
    else if((command[0]=='d') && (command[6]=='F')){
      il.pop_front();
    }
    else if((command[0]=='d') && (command[6]=='L')){
      il.pop_back();
    }
    else if(command[0] == 'd'){
      scanf("%d",&key);
      for(list<int>::iterator it=il.begin();it != il.end();it++){
        if(*it == key){
          il.erase(it);
          break;
        }
      }
    }
  }
  int i = 0;
  for(list<int>::iterator it=il.begin();it != il.end();it++){
    if(i++)printf(" ");
    printf("%d",*it);
  }
  printf("\n");
  return 0;
  }