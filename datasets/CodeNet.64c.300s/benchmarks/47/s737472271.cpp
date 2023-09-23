#include<iostream>
using namespace std;
int main(){
  int ans[101] = {0};
  int n,max = 0;
  while(cin >>n){
    ans[n]++;
    if(max<ans[n]){max = ans[n];}
  }
  for(int i=0; i<101; i++){
    if(ans[i] == max){cout <<i<<endl;}
  }
  return 0;
}