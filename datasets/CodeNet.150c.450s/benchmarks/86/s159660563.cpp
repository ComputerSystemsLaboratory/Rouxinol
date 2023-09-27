#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
#include<iomanip>
using std::setprecision;
int main(){
  int n,m,p;
  int k;
  double d = 0;
  vector<int> v;
  int sum,ans;
  while(cin >> n >> m >> p){
    if(n == 0 && m == 0&& p == 0){
      break;
    }
    sum = 0;
    v.clear();
    for(int i = 0;i < n;i++){
      cin >> k;
      v.push_back(k);
      sum += k*100;
    }
    d = double(p)/100;
    sum = int(sum - sum*d);
    if(v[m-1] == 0){
      ans = 0;
    }else{

      ans = int(sum/v[m-1]);
    }

    cout << ans << endl;

  }
}