#include<iostream>
using namespace std;
#include<cstdio>
#include<cstring>
#include<string>
int main(){
  char mozi[1001][33],lenm[33],hind[33];
  int len=0,i=0,mozisu,count,max=-1;
  while(scanf("%s",mozi[i])!=EOF){
    len=strlen(mozi[i]);
    for(int j=0;j<len;j++){
      if(mozi[i][j]>='A' && mozi[i][j]<='Z'){
	mozi[i][j]+='a'-'A';
      }
    }
    if(mozisu<len){
     mozisu=len;
      strcpy(lenm,mozi[i]);
    }
    ++i;
  }
  for(int j=0;j<i+1;j++){
    count=0;
    for(int k=j+1;k<i+1;k++){
      if(!strcmp(mozi[j],mozi[k])){
	count++;
      }
    }
    if(max<count){
      max=count;
      strcpy(hind,mozi[j]);
    }
  }
  cout<<hind<<" "<<lenm<<endl;
}