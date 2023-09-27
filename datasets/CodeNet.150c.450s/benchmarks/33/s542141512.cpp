#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int calc(int p,int x){
  return p*(100+x)/100;
}

int main(){

  int bfr_zeikomi,x,y;
  int ans,x1,x2;
  while(true){
    cin >> x >> y >> bfr_zeikomi;
    if(x == 0 && y == 0 && bfr_zeikomi == 0)break;
    ans = 0;
    for(int i = 1;i<bfr_zeikomi;i++)
      for(int j = 1;j<bfr_zeikomi;j++){
	if(calc(i,x) + calc(j,x) == bfr_zeikomi){
	  x1 = calc(i,y);
	  x2 = calc(j,y);
	  ans = max(ans,x1+x2);
      }
    }
    cout << ans << endl;
  }

  return 0;
}