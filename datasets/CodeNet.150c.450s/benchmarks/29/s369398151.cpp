#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int list[2000000];
int head=999999,tail=999999;

void Insert(int x){
  head--;
  list[head]=x;
}

void Delete(int x){
  for(int i=head;i<tail;++i)
    if(list[i]==x){
      for(int j=i;j<tail-1;++j)
	list[j]=list[j+1];
      tail--;
      break;
    }
}

void DeleteFirst(){
  head++;
}

void DeleteLast(){
  tail--;
}

int main(){
  int n;
  scanf("%d",&n);
  
  char c[12];
  int num;
  for(int i=0;i<n;++i){
    scanf("%s",c);
    if(!strcmp(c,"insert")){
      scanf("%d",&num);
      Insert(num);
    }
    else if(!strcmp(c,"delete")){
      scanf("%d",&num);
      Delete(num);
    }
    else if(!strcmp(c,"deleteFirst"))
      DeleteFirst();
    else if(!strcmp(c,"deleteLast"))
      DeleteLast(); 
  }
  
  for(int i=head;i<tail;i++){
    if(head<i)putchar(' ');
    printf("%d",list[i]);
  }
  putchar('\n');
}