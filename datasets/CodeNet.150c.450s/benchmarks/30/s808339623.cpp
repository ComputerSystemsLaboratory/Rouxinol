#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

void Input(int*,int*);
int Calc(int*,int*);
void Output(int*,int*,int*);

int main(int argc,char* argv[]){
  int n,count=0;
  int arr[100];

  Input(&n,arr);
  count=Calc(&n,arr);

  Output(&n,&count,arr);

  return 0;
}

void Input(int *pn,int *arr){
  cin>>*pn;
  for(int i=0;i<*pn;i++)
    cin>>*arr++;
}

int Calc(int *pn,int *arr){
  int count=0,now;
  for(int i=0;i<*pn;i++){
    now=i;
    for(int j=i+1;j<*pn;j++){
      if(arr[now]>arr[j])
	now=j;
    }
    if(arr[i]!=arr[now]) count++;
    swap(arr[i],arr[now]);    
  }
  return count;
}

void Output(int *pn,int *pcount,int *arr){

  printf("%d",*arr++);
  for(int i=1;i<*pn;i++)
    printf(" %d",*arr++);
  puts("");

  printf("%d\n",*pcount);
}