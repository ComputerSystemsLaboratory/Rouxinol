#include<iostream>
#include<vector>
using namespace std;

int main(void){
  const int max = 30;
  vector<bool> ans(max,true);
  for(int i = 0 ; i < max - 2 ; i++){
    int in;
    cin>>in;
    ans[--in]=false;
  }
  for(int i = 0 ; i< max ; i++){
    if(ans[i])cout<<i+1<<endl;
  }
}