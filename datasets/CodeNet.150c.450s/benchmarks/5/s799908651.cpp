#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int line[n];
  for(int i=0;i<n;i++){
    cin>>line[i];
  }
  int a=n-1;
  for(int i=0;i<n;i++){
    cout<<line[a];
    if(a)cout<<" ";
    --a;
  }
  cout<<endl;
  return 0;
}