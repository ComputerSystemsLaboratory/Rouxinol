#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
string IntToString(int);
int StringToInt(string);
int main(){
  while(1){
    int n,m;
    cin >> n >> m;
    if(n == 0 && m == 0)break;
    vector<pair<int,int> > d_p(n);
    for(int i = 0;i < n;i++){
      cin >> d_p[i].second >> d_p[i].first;
    }
    sort(d_p.begin(),d_p.end());
    int cnt = 0;
    int ans = 0;
    for(int i = n-1;i >= 0;i--){
      for(int j = 0;j < d_p[i].second;j++){
	if(cnt >= m){
	  ans += d_p[i].first;
	}
	cnt++;
      }
    }
    cout << ans<< endl;
  }
  return 0;   
}
string IntToString(int number){
  stringstream ss;
  ss << number;
  return ss.str();
}
int StringToInt(string number){
  stringstream ss;
  ss << number;
  int numInt;
  ss >> numInt;
  return numInt;
  
}