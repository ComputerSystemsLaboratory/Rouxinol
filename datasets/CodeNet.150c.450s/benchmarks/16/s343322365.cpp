#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int staq1[20000]={},l1=0;
void in(int a){staq1[l1++]=a;}
int out(){return staq1[--l1];}

int staq2[20000][2]={},l2=0;
void in2(int a,int b){staq2[l2][0]=a;staq2[l2][1]=b;l2++;}
int out2(){return l2--;}

int main(){
  int  sum = 0;
  char inp;
  
  for(int cnt=0; scanf("%c",&inp)!=EOF; cnt++){
    if(inp!='\\'&&inp!='/')continue;
    if(inp=='\\') in(cnt);
    else if(inp=='/'&&l1>0){
      int j = out();
      sum += cnt - j;
      int a = cnt - j;
      while(l2>0&&staq2[l2-1][0]>j){
	a+=staq2[l2-1][1];
	out2();
      }
      in2(j,a);
    }
  }
  printf("%d\n%d",sum,l2);
  if(sum!=0){
    cout<<" ";
    for(int i=0;i<l2-1;i++){
      printf("%d ",staq2[i][1]);
    }
    cout<<staq2[l2-1][1]<<endl;
  }
  else cout<<endl;
  return 0;  
}

