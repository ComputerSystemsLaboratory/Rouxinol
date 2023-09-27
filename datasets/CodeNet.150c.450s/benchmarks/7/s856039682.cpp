#include<algorithm>
#include<functional>
#include<iostream>
using namespace std;

int main(){
  int yama[10];
  for(int i=0;i<10;i++){
    cin>>yama[i];
  }
  sort(yama,yama +10,greater<int>());
  for(int j=0;j<3;j++){
    cout<<yama[j]<<endl;
  }
}