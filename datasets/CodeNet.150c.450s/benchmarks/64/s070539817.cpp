#include <iostream>
using namespace std;
int n,a[21],num;

bool saiki(int i,int sum){
  if(sum==num)return 1;
  if(i==n)return 0;
  if(saiki(i+1,a[i]+sum))return 1;
  if(saiki(i+1,sum))return 1;
  return 0;  
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  int q;
  cin>>q;
  while(q--){
    cin>>num;
    if(saiki(0,0)) cout <<"yes"<<endl;
    else cout <<"no"<<endl;
  }
  return 0;
}