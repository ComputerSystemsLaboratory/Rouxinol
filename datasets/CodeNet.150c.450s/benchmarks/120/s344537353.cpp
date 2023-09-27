#include <iostream>
#include <vector>
using namespace std;

int main(){
  int r,c;
  while(cin >> r >> c && r && c){
    vector<vector<int> > v(r,vector<int>(c)), v2;
    int ans = 0;
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin >> v[i][j];

    for(int i=0;i<(1<<(r-1));i++){
      v2 = v;
      for(int j=0;j<r-1;j++){
	if((i & (1<<j)) != 0){
	  for(int k=0;k<c;k++) v2[j][k] = (v2[j][k] + 1) % 2;
	}
      }
      int a = 0;
      for(int j=0;j<c;j++){
	int b = 0;
	for(int k=0;k<r;k++){
	  if(v2[k][j] == 0) b++;
	}
	a += max(b,r-b);
      }
      ans = max(ans,a);
    }
    cout << ans << endl;
  }
    return 0;
}