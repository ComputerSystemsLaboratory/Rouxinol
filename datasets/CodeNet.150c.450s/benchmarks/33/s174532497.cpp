#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
  int s = 1, x = 1, y = 1, a, b;
  vector<int> price;
  while(s > 0) {
    cin >> x >> y >> s;
    for(int i = 1; i < s; i++) {
      for(int j = 1; j < s; j++) {
	a = (int) i*(100+x)/100;
	b = (int) j*(100+x)/100;
	if(a+b == s){
	  a = (int) i*(100+y)/100;
	  b = (int) j*(100+y)/100;
	  price.push_back(a+b);
	}
      }
      if(i == s-1){
	sort(price.begin(), price.end());
	cout << price.back() << endl;
	price.clear();
      }
    }
  }
  return 0;
}
      