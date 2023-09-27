#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
  int n;
  list<int> L;
  char str[15];
  scanf("%d",&n);
  for(int i=0,num;i<n;i++){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&num);
      L.push_front(num);
    }
    else if(str[6]=='F'){
      L.pop_front();
    }
    else if(str[6]=='L'){
      L.pop_back();
    }
    else{
      scanf("%d",&num);
      for(list<int>::iterator it=L.begin();it!=L.end();it++){
	if(*it==num){
	  L.erase(it);
	  break;
	}
      }
    }
  }
  int i=0;
  for(list<int>::iterator it=L.begin();it!=L.end();it++){
    if(i++)printf(" ");
    printf("%d",*it);
  }
  printf("\n");
}
  
  