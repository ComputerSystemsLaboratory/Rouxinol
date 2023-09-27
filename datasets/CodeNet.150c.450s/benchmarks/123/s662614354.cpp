#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num){
  if(num <= 1) return false;
  if(num == 2) return true;
  if(num % 2 == 0) return false;
  int sq = sqrt(num);
  for(int i = 3; i <= sq; i = i + 2){
    if(num % i == 0) return false;
  }
  return true;
}

int main() {
  int n, num;
  vector<int> out;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num;
    if(is_prime(num)) out.push_back(num);
  }
  cout << out.size() << endl;
  return 0;
  
}