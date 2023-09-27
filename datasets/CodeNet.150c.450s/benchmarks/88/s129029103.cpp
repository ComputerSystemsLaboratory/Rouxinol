#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

void Solve(int h,int w){
  int len=h*h+w*w;
  int result_h=h+1,result_w=std::max(w+1,result_h+1),result_len=result_h*result_h+result_w*result_w;
  for(int hi=1;hi<=150;hi++){
    for(int wi=hi+1;wi<=150;wi++){
      int temp_len=hi*hi+wi*wi;
      if(len==temp_len&&h<hi){
        if(temp_len<result_len){
          result_len=temp_len;
          result_h=hi;
          result_w=wi;
        }else if(temp_len==result_len&&hi<result_h){
          result_len=temp_len;
          result_h=hi;
          result_w=wi;
        }
      }else if(len<temp_len){
        if(temp_len<result_len){
          result_len=temp_len;
          result_h=hi;
          result_w=wi;
        }else if(temp_len==result_len&&hi<result_h){
          result_len=temp_len;
          result_h=hi;
          result_w=wi;
        }
      }
    }
  }

  cout<<result_h<<" "<<result_w<<endl;
}

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  while(true){
    int h,w;
    cin>>h>>w;
    if(h==0&&w==0){
      break;
    }

    Solve(h,w);

  }

  return 0;
}

