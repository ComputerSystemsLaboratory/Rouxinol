#include <list>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  list<int> L;
  int n; scanf("%d",&n);
  for(int i=0;i<n;i++){
    char com[20];
    scanf("%s",com);
    if(com[0]=='i'){
      int x; scanf("%d",&x);
      L.push_front(x);
    }else if(com[6]=='F'){
      L.pop_front();
    }else if(com[6]=='L'){
      L.pop_back();
    }else{
      int x; scanf("%d",&x);
      list<int>::iterator it;
      for(it=L.begin();it!=L.end();it++){
        if(x==*it){
          L.erase(it);
          break;
        }
      }
    }
  }
  for(list<int>::iterator it=L.begin();it!=L.end();it++){
    if(it==L.begin()){
      printf("%d",*it);
    }else{
      printf(" %d",*it);
    }
  }
  cout << endl;
}