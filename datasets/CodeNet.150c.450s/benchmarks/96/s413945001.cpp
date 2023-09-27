#include <iostream>
#include <string.h>
using namespace std;
int main(){
  int n,i,j,len,count,which,flag;
  char in[1025];
  char data[10][6]={
    {' ',' ',' ',' ',' '},
    {'.',',','!','?',' '},
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'},
    {'j','k','l'},
    {'m','n','o'},
    {'p','q','r','s'},
    {'t','u','v'},
    {'w','x','y','z'}
  };
  cin >> n;
  for(i=0;i<n;i++){
    cin >> in;
    len=strlen(in);
    count=-1;
    which=0;
    for(j=0;j<len;j++){
      flag=0;
      if(in[j]=='1') which=1;
      else if(in[j]=='2') which=2;
      else if(in[j]=='3') which=3;
      else if(in[j]=='4') which=4;
      else if(in[j]=='5') which=5;
      else if(in[j]=='6') which=6;
      else if(in[j]=='7') which=7;
      else if(in[j]=='8') which=8;
      else if(in[j]=='9') which=9;
      else{
        if(which==0) continue;
	if(which==1) count%=5;
	else if(which==2||which==3||which==4||which==5||which==6||which==8) count%=3;
	else if(which==7||which==9) count%=4;
	cout << data[which][count];
	flag=1;
        count=-1;
        which=0;
      }
      if(flag==0) count++;
    }
    cout << endl;
  }
  return 0;
}