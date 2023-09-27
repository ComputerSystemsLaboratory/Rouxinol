#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  vector<int> a;
  a.resize(10);
  for(int i=0;i<10;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  cout<<a[9]<<endl<<a[8]<<endl<<a[7]<<endl;
}