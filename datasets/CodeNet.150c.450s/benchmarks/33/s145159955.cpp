#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, y, s;
  while(cin >> x >> y >> s, s){
    int ans = 0;
    for(int i = 1; i <= 1000; i++){
      for(int j = 1; j <= 1000; j++){
	if((int)(i*(100.0 + x) /100.0)
	   + (int)(j*(100.0 + x) /100.0) != s)continue;
	//if(i*((100.0 + x)/100.0) + j * ((100.0 + x)/100.0) != s)continue;
	int tmp = (int)(i*(100.0 + y)/100.0) + (int)(j*(100.0 + y)/100.0);
	ans = max(ans, tmp);
      }
    }
    cout << ans << endl;
  }
  return 0;
}