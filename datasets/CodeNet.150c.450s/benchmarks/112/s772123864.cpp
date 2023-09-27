#include<stdio.h>
#include<stdlib.h>
#include<map>
using namespace std;

int main(){
  int i,n;
  long li,m;
  char buf[10];
  map<char,char> conv;
  map<char,char>::iterator it;
  do{
    fgets(buf,10,stdin);
    n=atoi(buf);
    if(n==0) break;
    for(i=0;i<n;i++){
      fgets(buf,10,stdin);
      conv.insert(map<char,char>::value_type(buf[0],buf[2]));
    }
    fgets(buf,10,stdin);
    m=atol(buf);
    for(li=0;li<m;li++){
      fgets(buf,10,stdin);
      if((it=conv.find(buf[0]))==conv.end()){
	printf("%c",buf[0]);
      }else{
	printf("%c",it->second);
      }
    }
    printf("\n");
    conv.clear();
  }while(1);
  return 0;
}