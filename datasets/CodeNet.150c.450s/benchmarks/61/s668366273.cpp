#include<iostream>
using namespace std;

int main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x){
    if(n==0)break;
    int y[n];
    for(int i=0;i<n;i++)cin>>y[i];
    int cnt=0;
    int t=-1;
    int check = x;
    while(cnt!=n && t <= 10000){
      t++;
      //cout << "check:" << check << endl;
      if(y[cnt]==check){
	cnt++;
      }
      check=(a*check+b)%c;
    }
    if(t==10001){
      cout << -1 << endl;
    }else{
      cout << t << endl;
    }
  }
  return 0;
}