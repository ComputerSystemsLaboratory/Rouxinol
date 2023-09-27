#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
  while(1){
    
  char h[7]={};
  int L,min,max,f=0,sum[100000],i;
  cin>>h>>L;
  if(L==0) break;
  for(int i=strlen(h);i<L;i++) h[i]='0';
  sum[0]=atoi(h);
  i=1;
  while(1){
    if(f==1) break;
      sort(h,h+L);
    min=atoi(h);
    reverse(h,h+L);
    max=atoi(h);
    sum[i]=max-min;
    for(int j=0;j<i;j++){
      if(sum[j]==sum[i]){
	cout<<j<<" "<<sum[i]<<" "<<i-j<<endl;
	f=1;
	break;
      }
    }
    sprintf(h,"%d",sum[i]);
       for(int i=strlen(h);i<L;i++) h[i]='0';
     i++;
  }
  }
return 0;
}
    
  