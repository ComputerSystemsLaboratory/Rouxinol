#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;
typedef long long ll;

int main(){
  string taro[1000], hanako[1000];
  int n, score_t=0, score_h=0;

  cin>>n;
  for(int i=0; i<n; ++i){
    cin>>taro[i]>>hanako[i];

    if(taro[i] > hanako[i]){
      score_t += 3;
    }else if(taro[i] < hanako[i]){
      score_h += 3;
    }else{
      score_t += 1;
      score_h += 1;
    }
  }
  cout<<score_t<<" "<<score_h<<endl;
}