#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,max,min,gap,maxgap,ans;
  	vector<int> score(201);
  	for(int i=0; i < 10001; i++){
      cin >> m >> min >> max;
      if(m == 0 && min == 0 && max == 0){
        break;
      }else{
  	  	for(int j=0; j < m; j++){
          cin >> score.at(j);
        }
        maxgap = score.at(min-1) - score.at(min);
        ans = min;
        for(int k = min; k < max; k++){
          gap = score.at(k) - score.at(k+1);
          if(gap >= maxgap){
            maxgap = gap;
            ans = k+1;
          }
        }
        cout << ans << endl;
      }
    }
  return 0;
}
