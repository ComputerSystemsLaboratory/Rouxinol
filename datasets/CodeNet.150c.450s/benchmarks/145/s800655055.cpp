#include <iostream>
#include <cstring>
#include <string.h>
#include <cstdio>
using namespace std;
int main(){
  char c[1111];
  int len=0;
  int k=0;
  char maxc;
  int iti[1111]={0};//頻度高いよう
  char ans[1111];
  int sai=0;
  char ans1[1111];
  char cpy[1111][1111];
  while(scanf("%s",c)!=EOF){
    if(len<strlen(c)){//最長のもの
      len=strlen(c);
      strcpy(ans,c);
    }
    
    for(int i=0;i<k+1;i++){
      if(strcmp(cpy[i],c)==0){//すでに一度でていたら
	iti[i]++;
	break;
      }else if(i==k){//一度もでていなかったら
	strcpy(cpy[i],c);
      }
    }
    k++;
  }
  
  strcpy(ans1,cpy[0]);
  sai=iti[0];
  for(int i=0;i<k;i++){
    if(sai<iti[i]){
      sai=iti[i];
      strcpy(ans1,cpy[i]);
    }
  }
  /*for(int i=0;i<k;i++){
    cout << cpy[i] << " ";
    }*/

  cout << ans1 << " " << ans << endl;
}
    