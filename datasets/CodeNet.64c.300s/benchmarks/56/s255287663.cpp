#include<iostream>
#include<vector>

using namespace std;

void func(int &y, int &m, int &d){
  d++;
  if(y%3==0){
    if(d>20)m++,d=1;
  }
  else if(m%2==1){
    if(d>20)m++,d=1;
  }
  else if(d>19)m++,d=1;
  
  if(m>10)y++,m=1;    
}

int main(void){

  int n;
  cin >> n;
  while(n--){
    int y,m,d;
    cin >> y >> m >> d;
    int ans=0;
    while(!(y==1000 && m==1 && d==1)){
      func(y,m,d);
      ans++;
    }
    cout << ans << endl;
  }
  
  return 0;
}