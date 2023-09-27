#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  int* m;
  int list[1000][3];
  cin>>n;
  for(int i=0;i<n;i++){
  cin>>list[i][0]>>list[i][1]>>list[i][2];
  }
  for(int j=0;j<n;j++){
  sort(list[j],list[j]+3);
  if(list[j][0]*list[j][0]+list[j][1]*list[j][1]==list[j][2]*list[j][2]) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  return 0;
}