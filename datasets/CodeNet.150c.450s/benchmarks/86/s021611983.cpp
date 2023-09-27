#include<iostream>
using namespace std;

int main(){
  int n,m,p;
  while(1){
    cin>>n>>m>>p;
    if(n==0)return 0;
    int sum=0;
    int a;
    for(int i=0;i<n;i++){
      int tmp;
      cin>>tmp;
      if(i==m-1)a=tmp;
      sum+=tmp;
    }
    int sumM=sum*100;
    if(a==0){
      cout << 0 << endl;
    }else{
      cout << (sumM*(100-p)/100)/a << endl;
    }
  }
  return 0;
}