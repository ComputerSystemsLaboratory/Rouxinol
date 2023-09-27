#include <iostream>
#include <vector>

using namespace std;

constexpr int bn = 10;
int B[bn];
int main(){
  int testnum;
  cin >> testnum;
  for(int t = 0;t<testnum;++t){
    for(int i=0;i<bn;++i){
      cin >> B[i];
    }
    int i;
    for(i=0;i<(1<<bn);++i){
      vector<int> left,right;
      left.push_back(-1);
      left.push_back(0);
      right.push_back(-1);
      right.push_back(0);
      for(int j=0;j<bn;++j){
        if((1<<j)&i){
          left.push_back(B[j]);
        }else{
          right.push_back(B[j]);
        }
      }
      bool is_ordered=true;
      for(int j=0;j<left.size()-1;++j){
        if(left[j]>left[j+1]) is_ordered = false;
      }
      for(int j=0;j<right.size()-1;++j){
        if(right[j]>right[j+1]) is_ordered = false;
      }
      if(is_ordered){
        break;
      }
    }
    if(i==(1<<bn)){
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;
    }
  }

}