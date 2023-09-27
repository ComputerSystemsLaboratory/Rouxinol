#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

void check(vector<string> in, vector<string>v){
  for(int i=0;i<v.size();i++){
    cout << v[i];
    if(i != v.size()-1){
      cout << " ";
    }
  }
  cout << endl;
  for(int i=1;i<v.size();i++){
    if(v[i-1][1] == v[i][1]){
      int num1, num2;
      for(int j=0;j<v.size();j++){
        if(v[i] == in[j]){
          num2 = j;
        }else if(v[i-1] == in[j]){
          num1 = j;
        }
      }
      if(num1 > num2){
        cout << "Not stable" << endl;
        return ;
      }
    }
  }
  cout << "Stable" << endl;
  return;
}

int main(void){
  int n;
  cin >> n;
  vector<string> in(n);
  vector<string> bs(n);
  vector<string> ss(n);
  for(int i=0;i<n;i++){
    cin >> in[i];
    bs[i] = in[i];
    ss[i] = in[i];
  }
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(bs[j][1] < bs[j-1][1]){
        swap(bs[j], bs[j-1]);
      }
    }
  }
  check(in, bs);
  for(int i=0;i<n;i++){
    int min = i;
    for(int j=i;j<n;j++){
      if(ss[j][1] < ss[min][1]){
        min = j;
      }
    }
    swap(ss[min], ss[i]);
  }
  check(in, ss);

  return 0;
}