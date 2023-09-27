#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> a(5);
  for(int i=0; i<5; i++) cin >>a[i];
  sort(a.begin(), a.end());
  cout <<a[4]<<" "<<a[3]<<" "<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
  return 0;
}