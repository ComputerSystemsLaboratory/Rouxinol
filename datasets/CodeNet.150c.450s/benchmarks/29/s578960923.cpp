#include <bits/stdc++.h>
using namespace std;
int main(){
  list<int> lst;
  int n;
  cin >> n;
  char query[100];
  int key;
  list<int>::iterator itr;
  while(n--){
    scanf("%s",query);
    if(!strcmp(query,"insert")){
      scanf("%d",&key);
      lst.push_front(key);
    }
    if(!strcmp(query,"delete")){
      scanf("%d",&key);
      for(itr = lst.begin();itr != lst.end();itr++){
	if(*itr == key){lst.erase(itr);break;}
      }
    }
    if(!strcmp(query,"deleteFirst"))lst.pop_front();
    if(!strcmp(query,"deleteLast"))lst.pop_back();
  }
  for(itr = lst.begin();itr != --lst.end();itr++){
    printf("%d ",*itr);
  }
  printf("%d\n",*itr);
  return 0;
}