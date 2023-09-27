#include<iostream>
#include<vector>
using namespace std;

int main(void){
  int n,m,p;
  while(cin>>n>>m>>p,n+m+p){
    vector<int> stu(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i ++){
      cin>>stu[i];
      sum += stu[i];
    }
    sum *= 100 - p;
    if(stu[m-1]==0)cout<<0<<endl;
    else cout<<sum/stu[m-1]<<endl;
  }
}