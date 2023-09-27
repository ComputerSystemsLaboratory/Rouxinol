#include<bits/stdc++.h>
using namespace std;
int n;
pair<char,int> A[100000];
map<int,vector<char> > m;
int partition(int p,int r){
  int x = A[r].second;
  int i = p - 1;
  for(int j=p;j<r;j++){
    if(A[j].second <= x){
      i = i+1;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}
void MyQuickSort(int p,int r){
  if(p<r){
    int q = partition(p,r);
    MyQuickSort(p,q-1);
    MyQuickSort(q+1,r);
  }
}
int main(){
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> A[i].first >> A[i].second;
    m[A[i].second].push_back(A[i].first);
  }
  MyQuickSort(0,n-1);
  int nowpos = 0;
  int oldnum = 0;
  for(int i = 0;i < n;i++){
    if(oldnum != A[i].second)nowpos=0;
    if(m[A[i].second][nowpos] == A[i].first){
      if(i == n -1)cout <<"Stable" << endl;
      nowpos++;
      oldnum = A[i].second;
      continue;
    }
    cout << "Not stable" << endl;
    break;
  }
  for(int i = 0;i<n;i++){
    cout << A[i].first <<" " << A[i].second <<endl;
  }
  return 0;
}

