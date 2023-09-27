#include<iostream>
#include<vector>
#define INF 2000000000
using namespace std;
int c=0;
vector<int> merge(vector<int> A, vector<int> B){
  vector<int> res;
  int i=0,j=0;
  while(i<(int)A.size()||j<(int)B.size()){
    if(i<(int)A.size()&&j<(int)B.size()){
      if(A[i]<=B[j])res.push_back(A[i++]);
      else res.push_back(B[j++]);
    }
    else if(i<(int)A.size())res.push_back(A[i++]);
    else if(j<(int)B.size())res.push_back(B[j++]);
    c++;
  }
  return res;
}

vector<int> mergesort(vector<int> A){
  if(A.size()<2)return A;
  int mid=(A.size())/2;
  vector<int> left;
  vector<int> right;
  for(int i=0;i<(int)A.size();i++){
    if(i<mid)left.push_back(A[i]);
    else right.push_back(A[i]);
  }
  left=mergesort(left);
  right=mergesort(right);
  return merge(left,right);
}
 
 
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  v=mergesort(v);
  for(int i=0;i<(int)v.size()-1;i++){
    cout<<v[i]<<" ";
  }
  cout<<v[n-1]<<endl<<c<<endl;
  return 0;
}
