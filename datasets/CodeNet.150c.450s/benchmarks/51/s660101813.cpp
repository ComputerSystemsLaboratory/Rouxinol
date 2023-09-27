#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int h,num,count;
  vector<int> v;
  vector<int> ans;

  num = 1;
  count = 0;

  for(int i = 0;i<28;++i){
    cin>>h;
    v.push_back(h);
  }

  sort(v.begin(),v.end());

  for(int e : v){
    if(e == num){
      ++num;
    }
    else {
      ans.push_back(num);
      ++num;
      ++count;

      if(e == num){
        ++num;
      }
      else{
        ans.push_back(num);
        ++num;
        ++count;
      }
    }
    if(count == 2){
      break;
    }
  }

  if(count == 0){
    ans.push_back(num);
    ++num;
    ++count;
  }

  if(count == 1){
    ans.push_back(num);
  }

  for(int f : ans){
    cout<<f<<endl;
  }

  return 0;
}