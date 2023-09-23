#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
typedef vector<int> vi;

int calc(int x,int y, int s){
  double a = (double)s/(x+100)*100;
  int b = ceil(a);
  if((int)floor((double)b*(x+100)/100) != s)return -100000;
  double c = (double)b*(y+100)/100;
  return (int)floor(c);
}

int main(){
  int x, y, S;

  while(cin >> x >> y >> S, x){
    int ans = 0;
    for(int s=1;s<S;s++){
      int tmp1 = calc(x,y,s), tmp2 = calc(x,y,S-s);
      if(ans < tmp1+tmp2){
	ans = tmp1 + tmp2;
      }
    }
    cout << ans << endl;
  }
}