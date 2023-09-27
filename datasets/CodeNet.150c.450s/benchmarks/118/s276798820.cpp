#include<iostream>
using namespace std;
int tdfb(int,int,int);
int main(){
  int mi;
  mi=tdfb(1000,1,1);
  int n,y,m,d,t;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> y >> m >> d;
    t=tdfb(y,m,d);
    cout << mi-t << endl;
  }
  return 0;
}
int tdfb(int y,int m,int d){
  int t=0;
  for(int i=1;i<y;i++){
    if(i%3==0){
      t+=200;
    }
    else t+=195;
  }
  for(int i=1;i<m;i++){
    if(y%3!=0&&i%2==0){
      t+=19;
    }
    else t+=20;
  }
  t+=d;
  return t;
}
      