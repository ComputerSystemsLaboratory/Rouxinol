#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int num[6];
int table[1000000];

void numset(int n,int l){
  for(int i=l-1;i>=0;i--){
    if(n!=0){
      num[i]=n%10;
      n=n*0.1;
    }else{
      num[i]=0;
    }
  }
}

int max_f(int l){
  int n=0;
  for(int i=l-1;i>=0;i--){
    n+=num[i];
    n*=10;
  }
  return n/10;
}

int min_f(int l){
  int n=0;
  for(int i=0;i<l;i++){
    n+=num[i];
    n*=10;
  }
  return n/10;
}

int main(){
  int a,L;
  while(cin>>a>>L,L){
    memset(table,0,sizeof(table));
    table[a]=1;
    int i;
    for(i=2;i<=25;i++){
      numset(a,L);
      sort(num,num+L);
      int min = min_f(L);
      int max = max_f(L);
      a=max-min;
      if(table[a]!=0){
	break;
      }else{
	table[a]=i;
      }
    }
    cout<<table[a]-1<<" "<<a<<" "<<i-table[a]<<endl;
  }
  return 0;
}