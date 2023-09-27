#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> num(5);
  for(int i=0; i<5; i++) cin >>num[i];
  sort(num.begin(),num.end());
  for(int i=0; i<5; i++){
    cout <<num[4-i];
    if(i == 4) cout <<endl;
    else cout <<" ";
  }
  return 0;
}