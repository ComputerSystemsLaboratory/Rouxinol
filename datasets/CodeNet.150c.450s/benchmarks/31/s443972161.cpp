#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,tmp;
  vector<int> r;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> tmp;
    r.push_back(tmp);
  }
  int mini = r[0];
  long prof = -10000000000;
  for(int i=1;i<n;i++){
    prof = max(prof,long(r[i]-mini));
    mini = min(mini,r[i]);
  }

  cout << prof << endl;
  return 0;
}