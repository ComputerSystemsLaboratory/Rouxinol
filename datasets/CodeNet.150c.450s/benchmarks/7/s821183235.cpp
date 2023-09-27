#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> hill(10);
  for(int i=0; i<10; i++) cin >>hill[i];
  sort(hill.begin(),hill.end());
  for(int i=9; i>6; i--) cout <<hill[i]<<endl;
  return 0;
}