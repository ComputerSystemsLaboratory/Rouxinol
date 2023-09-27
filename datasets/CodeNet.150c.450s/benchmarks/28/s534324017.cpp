#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define PB push_back

bool func(long long,vector<int>&);

int n,k;

int main(int argc,char* argv[]){
  int x;
  long long right=100000*10000,left=0,mid;
  vector<int> vi;

  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>x;
    vi.PB(x);
  }

  while(left+1<right){
    
    mid=(left+right)/2;

    if(func(mid,vi))
      right=mid;
    else
      left=mid;
  }
  cout<<right<<endl;
}

bool func(long long mid,vector<int>& vi){
  long long sum=0;
  int cnt=1;

  for(int i=0;i<n;i++){
    if(vi[i]>mid)
      return false;

    if(sum+vi[i]<=mid)
      sum+=vi[i];
    else{
      sum=vi[i];
      cnt++;
    }
  }
  return cnt<=k;
}