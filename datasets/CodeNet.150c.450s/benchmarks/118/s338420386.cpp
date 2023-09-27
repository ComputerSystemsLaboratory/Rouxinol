#include <bits/stdc++.h>
using namespace std;

int a(int y,int m,int d){
  return (y-1)*20*10-(y-1-(y-1)/3)*5 +(m-1)*20+((y%3==0)?(0):(-(m-1)/2))+d;
}

int main(){
  int n;
  cin>>n;
  int nd=a(1000,1,1);
  while(n--){
    int y,m,d;
    cin>>y>>m>>d;
    int dd=a(y,m,d);
    cout<<nd-dd<<endl;
  }
  return 0;
}