#include <iostream>
#include <vector>

using namespace std;

int main(void){
  int n, r, p, c;
  vector<int> v, buf1, buf2;

  while(cin >> n >> r, n || r){
    v.clear();
    for(int i=1; i<=n; i++){
      v.push_back(i);
    }

    for(int i=0; i<r; i++){
      cin >> p >> c;

      buf1.clear();  buf2.clear();
      for(int j=0; j<v.size(); j++){
        if(j < n-p-(c-1) || n-p < j){
          buf1.push_back(v[j]);
        } else {
          buf2.push_back(v[j]);
        }
      }

      v.clear();
      for(int j=0; j<buf1.size(); j++){
        v.push_back(buf1[j]);
      }
      for(int j=0; j<buf2.size(); j++){
        v.push_back(buf2[j]);
      }
    }

    cout << v[v.size()-1] << endl;
  }

  return 0;
}