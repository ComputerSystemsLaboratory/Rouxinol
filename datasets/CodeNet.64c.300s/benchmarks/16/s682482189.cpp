#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,num;
  int mins=INT_MAX; //最小の値
  int dif=INT_MIN;  //差分
  cin>>n;
  while(n--){
    cin>>num;
    if(dif<num-mins)dif=num-mins;
    if(mins>num)mins=num;
  }
  cout<<dif<<endl;
}