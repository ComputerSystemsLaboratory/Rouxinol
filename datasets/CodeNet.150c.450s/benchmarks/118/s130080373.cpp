#include <iostream>
using namespace std;

int calc(int y,int m,int d){
  y--;
  m--;
  int ret = (20*5+19*5)*y+((y/3)*5);
  ret+=m*19+((m+1)/2);
  if (y%3==2)ret+=m/2;
  ret+=d;
  return ret;
}


int main(){
  int d[3];
  int n,mday;

  mday=calc(1000,1,1);
  //cout << mday;
  //mday=0;
  cin >> n;
  //sleep(1);
  for (int i=0;i<n;i++){
    cin >> d[0] >> d[1] >> d[2];
    cout << mday - calc(d[0],d[1],d[2]) << endl;
  }
  
  return 0;
}