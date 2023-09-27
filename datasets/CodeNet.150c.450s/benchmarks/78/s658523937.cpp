#include<iostream>
#include<vector>
using namespace std;

const int INF = 1e9;

int main(){
  int lim = 1e6;
  vector<int> cube;
  for(int i=1;;i++){
    int c = i*(i+1)*(i+2)/6;
    if(c>lim)break;
    cube.push_back(c);
  }

  vector<int> dp1(lim+1,INF), dp2(lim+1,INF);
  dp1[0] = dp2[0] = 0;

  for(int i=0;i<=lim;i++){
    for(int c : cube){
      if(i+c<=lim){
	dp1[i+c] = min(dp1[i+c], dp1[i]+1);
	if(c%2==1){
	  dp2[i+c] = min(dp2[i+c], dp2[i]+1);
	}
      }
    }
  }

  int n;
  while(cin >> n){
    if(n==0)break;
    cout << dp1[n] << " " << dp2[n] << endl;
  }
}