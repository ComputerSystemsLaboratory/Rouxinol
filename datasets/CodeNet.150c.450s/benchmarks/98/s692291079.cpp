#include<iostream>
#include<vector>
const int infty = 1 << 30;
using namespace std;
int main(){
  while(true){
    vector<int> taro;
    vector<int> hanako;
    
    int n,m;
    int pass_min = infty;
    int pass_taro = -1;
    int pass_hanako = -1;
    int sum_taro = 0;
    int sum_hanako = 0;
    cin >> n >> m;
    if( n == 0 && m == 0 ) break;
    for(int i = 0; i < n; ++i){
      int t; cin >> t;
      taro.push_back(t);
      sum_taro += t;
    }
    for(int i = 0; i < m; ++i){
      int t; cin >> t;
      hanako.push_back(t);
      sum_hanako += t;
    }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
	if( sum_taro - taro[i] + hanako[j] ==
	    sum_hanako - hanako[j] + taro[i] ){
	  if( pass_min > taro[i] + hanako[j] ){
	    pass_taro = taro[i];
	    pass_hanako = hanako[j];
	    pass_min = taro[i] + hanako[j];
	  }
	}
      }
    }
    if( pass_taro < 0 || pass_hanako < 0 ){
      cout << "-1" << endl;
    }else{
      cout << pass_taro << " " << pass_hanako << endl;
    }
  }
  return 0;
}