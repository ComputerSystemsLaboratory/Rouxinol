#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

#define NMAX = 100000;
#define KMAW = 100000;
#define WMAX =  10000;
using namespace std;

bool can_load(vector<int> w_sum, int &k, int &p){
  int loaded=0;
  auto it = w_sum.begin();
  for(int i=0;i<k;i++){
    it = upper_bound(it,w_sum.end(),p+loaded);
    auto prev = it - 1;
    loaded = *prev;
  }
  return it==w_sum.end();
}

int main(){
  int n,k; cin>>n>>k;
  vector<int> w_sum;
  int sum=0;
  for(int i=0;i<n;i++) {
    int tmp;
    scanf("%d",&tmp);
    sum+=tmp;
    w_sum.push_back(sum);
  }
  int right=sum;
  int left=sum/k;

  while(left<right){
    int mid = (right + left)/2;
    if(can_load(w_sum,k,mid)){
      right = mid;
    }else{
      left = mid + 1;
    }
  }

  cout<<right<<endl;
}