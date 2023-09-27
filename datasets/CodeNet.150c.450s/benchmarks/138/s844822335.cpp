#include<bits/stdc++.h>
using namespace std;
int saiki(int,int);
int main(){
  int x,y;
  cin >> x >> y;
  if(x<y)swap(x,y);
  int ans = saiki(y,x%y);
  cout << ans  << endl;
  return 0;
}
int saiki(int a,int b){
  if(b==0)return a;
  int re;
  re = saiki(b,a%b);
  return re;
}

  