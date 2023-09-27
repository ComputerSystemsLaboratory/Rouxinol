#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int m, f, r;
  vector<char> v;
  while(cin >> m >> f >> r){
    if(m == -1 && f == -1 && r == -1) break;
    if(m == -1 || f == -1) {v.push_back('F'); continue;}
    int sum = m + f;
    if(sum >= 80)v.push_back('A');
    else if(sum >= 65)v.push_back('B');
    else if(sum >= 50)v.push_back('C');
    else if(sum >= 30 && r >= 50)v.push_back('C');
    else if(sum >= 30)v.push_back('D');
    else v.push_back('F');
  }

  for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
  }

  return 0;
}