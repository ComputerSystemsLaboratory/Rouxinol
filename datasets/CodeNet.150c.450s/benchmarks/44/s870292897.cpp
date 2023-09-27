#include <cstdio>
#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int a[4],b[4];
  while(1){
  rep(i,4)cin >> a[i];
  rep(i,4)cin >> b[i];
  if(cin.eof())break;

  int blow=0,hit=0;

  rep(i,4){
    if(a[i]==b[i])hit++;
}
  rep(i,4)for(int j=0;j<4;j++){
    if(a[i]==b[j]&&i!=j)blow++;
}
  cout << hit <<" "<< blow << endl;
  }

}