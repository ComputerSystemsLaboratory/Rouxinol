#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  char str[256];
  char f[4]={'m','c','x','i'};
  int n;
  for(scanf("%d\n",&n);n--;){
    int c;
    int ans[2]={0,0};
    for(int i=0;i<2;i++){
      int tmp=0;
      while((c=getchar())!=' '&&c!='\n'){
	if(isdigit(c)){
	  tmp*=10;
	  tmp+=c-'0';
	}else{
	  if(tmp==0) tmp=1;
	  switch(c){
	  case 'm':
	    tmp*=1000;
	    break;
	  case 'c':
	    tmp*=100;
	    break;
	  case 'x':
	    tmp*=10;
	    break;
	  case 'i':
	    //tmp*=1;
	    break;
	  }
	  ans[i]+=tmp;
	  tmp=0;
	}
      }
    }
    //printf("%d %d\n",ans[0],ans[1]);
    int a=ans[0]+ans[1];
    int s[4];
    for(int i=0;i<4;i++){
      s[i]=a%10;
      a/=10;
    }
    for(int i=0;i<4;i++){
      if(s[3-i]!=0){
	if(s[3-i]==1)
	  printf("%c",f[i]);
	else
	  printf("%d%c",s[3-i],f[i]);
      }
    }
    puts("");
  }
  return 0;
}