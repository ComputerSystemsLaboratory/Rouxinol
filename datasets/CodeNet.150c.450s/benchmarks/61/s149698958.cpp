#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int i, n, a, b, c, x, y, ans;
  vector<int> data;

  while(1){
    cin >> n >> a >> b >> c >> x;
    if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;

    for(i=0; i<n; ++i){
      cin >> y;
      data.push_back(y);
    }

    for(i=0, ans=-1; i<=10000; ++i){
      if(x == data[0])
	data.erase(data.begin());

      if(data.size() == 0){
	ans = i;
	break;
      }
      x = (a * x + b) % c;
    }

    cout << ans << endl;
    data.clear();
  }

  return 0;
}