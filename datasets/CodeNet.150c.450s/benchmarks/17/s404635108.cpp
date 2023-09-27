#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){

}
int main(){
  vector<int > v;
  for(int i = 0 ; i < 5; i++){
    int d;
    cin >> d;
    v.push_back(d);
  }
  sort(v.begin(), v.end(), greater<int>());
  for(int i = 0; i < (int)v.size(); i++){
    if(i)cout << " ";
    cout << v[i];
  }
  cout << endl;
  return 0;
}