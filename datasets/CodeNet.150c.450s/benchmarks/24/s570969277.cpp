#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int main(){
  int n,m;
  while(cin>>n>>m,n){
    int table[11]={0};
    int d,p;
    int max = 0;
    for(int i=0;i<n;i++){
      cin>>d>>p;
      table[p]+=d;
      if(max < p) max = p;
    }
    for(int i=max;i>=0;i--){
      if(table[i] <= m){
	m-=table[i];
	table[i]=0;
      }else{
	table[i]-=m;
	m=0;
	break;
      }
    }
    long long int sum=0;
    for(int i=0;i<=max;i++){
      sum+=i*table[i];
    }
    cout<<sum<<endl;
  }
  return 0;
}