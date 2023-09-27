#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
  int num,count;
  vector<int> v(4,0) ;
  while(cin >> num){
    count = 0;
    for(int i = 0; i < 10; ++i){
      for(int j = 0; j < 10; ++j){
        for(int k = 0; k < 10; ++k){
          for(int l = 0; l < 10; ++l){
            if(i + j + k + l == num){
              ++count ;
            }
          }
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}