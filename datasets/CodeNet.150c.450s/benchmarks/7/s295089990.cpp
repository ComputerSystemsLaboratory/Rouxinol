#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n[10];
  for(int i=0;i<10;i++){
    cin>>n[i];
  }
  sort(n,n+10);//昇順ソート
  for(int i=9;i>=7;i--){
    cout<<n[i]<<endl;
  }
}