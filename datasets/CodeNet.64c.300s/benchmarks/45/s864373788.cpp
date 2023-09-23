#include<iostream>
using namespace std;

int main(){
  int n,m,p;
  while(cin>>n>>m>>p){
    if(n==0)break;
    double G=0;
    int num[n];
    for(int i=0;i<n;i++){
      cin>>num[i];
      G+=num[i];
    }
    G*=(100.0-p);
    if(num[m-1]!=0){
      cout << (int)(G/num[m-1]) << endl;
    }else{
      cout << 0 << endl;
    }
  }
  return 0;
}