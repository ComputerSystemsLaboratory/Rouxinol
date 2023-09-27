#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool into(int);
  int n,k,a;
  vector<int> w;
int main(){
  int l=0,r=0,m;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> a;
    r+=a;
    w.push_back(a);
  }
  r+=1;
  while(l<r){
    m=(l+r)/2;
    if(into(m)==true)r=m;
    else l=m+1;
  }
  cout << r << endl;
  return 0;
}
bool into(int p){
  vector<int> b(k,0);
  int j=0;
  for(int i=0;i<n;){
    if(j==k){
      return false;
    }
    if(b[j]+w[i]>p){
      j++;
      continue;
    }
    else{
      b[j]+=w[i];
      i++;
    }
  }
  return true;
}