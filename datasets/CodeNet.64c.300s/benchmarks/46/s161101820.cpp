#include<iostream>
#include<vector>
#include<cstring>
#define Number 1000000
typedef unsigned int uint;
using namespace std;

int table[Number];

void make_table(){
  memset(table,1,sizeof(table));
  table[0]=0;
  table[1]=0;
  for(int i=0;i<Number;i++){
    if(table[i]){
      for(int j=i+i;j<Number;j+=i){
	table[j]=0;
      }
    }
  }
}

int main(){
  int a,d,n;
  make_table();
  // for(int i=0;i<Number;i++)
  //   if(table[i])
  //     cout<<i<<" ";
  // cout<<endl;
  while(cin>>a>>d>>n,a){
    int num=a;
    int cnt=0;
    while(num<Number){
      if(table[num]) cnt++;
      if(cnt==n) break;
      num+=d;
    }
    cout<<num<<endl;
  }
  return 0;
}