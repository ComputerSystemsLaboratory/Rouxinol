#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<int> a;
int L;

string intString(int n){
  stringstream ss;
  int keta = 1,tmp;
  tmp = n;
  while(tmp != 0){
    tmp /= 10;
    keta++;
  }
  for(int i = 0; i <= (L-keta);i++) ss << 0;

  ss << n;

  return ss.str() ;
}


int func(string str){
  sort(str.begin(),str.end());
  int low = stoi(str);
  sort(str.rbegin(),str.rend());
  int high = stoi(str);
  return high - low;
}

void solve(){
  //桁変更
  string str = intString(a[0]);
  for(int i = 1 ; ; i++){
    a.push_back(func(str));
    for(int j = 0; j < i; j++){
      if(a[i] == a[j]) {
        cout << j << ' ' << a[i] << ' '<< ( i - j ) << endl;
        a.clear();
        return;
      }
    }
    str = intString(a[i]);
  }

}




int main(){
  int a0;
  while(true){
    cin >> a0 >> L;
    if(a0 + L == 0) break;
    a.push_back(a0);
    solve();
  }
  return 0;
}

