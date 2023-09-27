#include<iostream>
#include<list>
#include<stdio.h>
using namespace std;
int main(){
  int n,num;
  list<int> b;   
  char a[10];
  list<int>::iterator it;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s",a);
    if(a[5]=='t'){
      scanf("%d",&num);
      b.push_front(num);
    }else if(a[6]=='L'){
      b.pop_back();
    }else if(a[6]=='F'){
      b.pop_front();
    }else {
      scanf("%d",&num);
      it=b.begin();
      for(;it!=b.end();it++){
	if(*it==num){
	  b.erase(it);
	  break;
	}
      }
    }
  }
  it=b.begin();
  for(;it!=b.end();it++){    
    if(it!=b.begin())printf(" ");
    printf("%d",*it);
  }printf("\n");
  return 0;
}