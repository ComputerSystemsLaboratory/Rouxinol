#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool s(int x,int y){return (x>y);}
int main(){
  vector<int> a(5);
  while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]){
    sort(a.begin(),a.end(),s);
    for(int i=0;i<4;i++) cout<<a[i]<<" ";
    cout<<a[4]<<endl;
  }
  return 0;
}