#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  vector<int> n(5);

  cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];

  sort(n.begin(), n.end(), greater<int>());

  for(int i=0; i<n.size(); i++) {
    cout << n[i];
    if(i==n.size()-1){
      cout << "\n";
    }else{
      cout << " ";
    }
  }
  return 0;
}