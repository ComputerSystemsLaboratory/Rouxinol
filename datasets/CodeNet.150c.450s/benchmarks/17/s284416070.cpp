#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> num;
  int n;
  for(int i=0; i<5; i++){
    cin >> n;
    num.push_back(n);
  }

  sort(num.begin(), num.end(), greater<int>());

  for(int i=0; i<5; i++){
    if(i == 0)
      cout << num[i];
    else
      cout << " " << num[i];
  }
  cout << endl;
}