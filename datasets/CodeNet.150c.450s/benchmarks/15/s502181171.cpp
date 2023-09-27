#include <iostream>
#include <map>
using namespace std;

int main(){
  map<int,int> mymap;
  int n, q, x, sum=0;
  cin >> n;
  while(n--){
    cin >> x;
    mymap[x] = 1;
  }

  cin >> q;
  while(q--){
    cin >> x;
    if(mymap.find(x) != mymap.end())
      sum++;
  }

  cout << sum << endl;
  return 0;
}