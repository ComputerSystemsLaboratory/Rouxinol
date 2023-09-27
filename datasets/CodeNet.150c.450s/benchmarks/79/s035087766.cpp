#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int n,int r){
  vector<int> l;
  for(int i=0;i<n;i++){
    l.push_back(i+1);
  }
  l = vector<int>(l.rbegin(),l.rend());
  for(int i=0;i<r;i++){
    int p,c;
    cin>>p>>c;
    vector<int> l1,l2;
    for(int j=0;j<l.size();j++){
      if(j<p-1){
        l1.push_back(l[j]);
      }else if(j<p+c-1){
        l2.push_back(l[j]);
      }else{
        l1.push_back(l[j]);
      }
    }
    for(int j=0;j<l1.size();j++){
      l2.push_back(l1[j]);
    }
    l = l2;
    //for(auto i:l)cout<<i<<" ";cout<<endl;
  }
  return l[0];
}


int main(){
  int n,r;
  while(cin>>n>>r,n!=0&&r!=0){
    cout<<solve(n,r)<<endl;
  }

}