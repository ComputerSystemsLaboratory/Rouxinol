#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  vector<int> v;
  while(1){
    string str;
    cin >> str;
    if(str.size() == 1 && str[0] == '0')break;
    int sum = 0;
    for(int i=0;i<str.size();i++){
      sum += (int)(str[i] - '0');
    }
    v.push_back(sum);
  }
  for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
  }
  return 0;
}