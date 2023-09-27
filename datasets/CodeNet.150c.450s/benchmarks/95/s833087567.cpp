#include <iostream>
#include <string.h>
using namespace std;
int main(){
  int n,i,lr[2],flag=0,count;
  string data;
  lr[0]=1;
  lr[1]=1;
  while(1){
    count=0;
    flag=0;
    cin >> n;
    if(n==0) break;
    for(i=0;i<n;i++){
      cin >> data;
      if(data=="lu") lr[0]=2;
      if(data=="ld") lr[0]=1;
      if(data=="ru") lr[1]=2;
      if(data=="rd") lr[1]=1;
      if(flag==0&&lr[0]==2&&lr[1]==2){
	flag=1;
	count++;
      }
      if(flag==1&&lr[0]==1&&lr[1]==1){
        flag=0;
	count++;
      }
    }
    lr[0]=1;
    lr[1]=1;
    cout << count << endl;
  }
  return 0;
}