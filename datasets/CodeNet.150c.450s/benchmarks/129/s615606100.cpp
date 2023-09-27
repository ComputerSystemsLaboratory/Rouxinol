#include<iostream>
using namespace std;
int main(){
  int i,j,k;
  int r,c;
  int b;
  cin >> r >> c;
  int rsum[100]={};
  int csum[100]={};
  int sum=0;
  for(i=0;i<r;i++){
    cin >> b;
    cout << b;
    rsum[i]+=b;
    csum[0]+=b; 
    for(j=1;j<c;j++){
      cin >> b;
      cout <<" " << b;
      rsum[i]+=b;
      csum[j]+=b; 
    }
    cout << " " << rsum[i] << endl;
    sum+=rsum[i];
  }
  cout << csum[0];
  for(j=1;j<c;j++){
    cout << " " << csum[j];    
  }
  cout << " " << sum <<  endl;
  return 0;
}

