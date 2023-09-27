#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  vector<int> a(5);
  for(int i = 0; i < 5; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  for(int i = 0; i < 5; i++){
    cout << a[i];
    if(i != 4)cout << " ";
  }
  cout << endl;
}