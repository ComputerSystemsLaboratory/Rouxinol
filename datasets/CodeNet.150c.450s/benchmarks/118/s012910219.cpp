#include<iostream>
using namespace std;

int main(){
  int n,y,m,d,a=0,b=0;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> y >> m >> d;
    a=0;
    b=0;
    for(int i=1;i<=999;i++){
      for(int j=1;j<=10;j++){
        if(i%3==0)a+=20;
        else if(j%2==1)a+=20;
        else a+=19;
      }
    }
    for(int i=1;i<=y-1;i++){
      for(int j=1;j<=10;j++){
        if(i%3==0)b+=20;
        else if(j%2==1)b+=20;
        else b+=19;
      }
    }
    for(int i=1;i<=m-1;i++){
        if(y%3==0)b+=20;
        else if(i%2==1)b+=20;
        else b+=19;
    } 
  a+=1;
  b+=d;
  cout << a-b << endl;
  }
}
  
  