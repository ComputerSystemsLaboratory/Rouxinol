#include <iostream>
#include<string.h>
using namespace std;

int n[6],temp;
void throww(char a){
  if(a=='N'){temp=n[0];n[0]=n[1];n[1]=n[5];n[5]=n[4];n[4]=temp;}
  if(a=='S'){temp=n[0];n[0]=n[4];n[4]=n[5];n[5]=n[1];n[1]=temp;}
  if(a=='E'){temp=n[0];n[0]=n[3];n[3]=n[5];n[5]=n[2];n[2]=temp;}
  if(a=='W'){temp=n[0];n[0]=n[2];n[2]=n[5];n[5]=n[3];n[3]=temp;}
}
int main() {
   char strm[101];
  for(int i=0;i<6;i++)cin>>n[i];
  cin>>strm;
  for(int i=0;i<strlen(strm);i++)throww(strm[i]);
  cout<<n[0]<<endl;
  return 0;
}