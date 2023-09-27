#include <iostream>
#include <vector>
 
using namespace std;
 
#define INF (1<<29)
 
typedef pair<char,int> P;
 
int solve(vector<P> &A,int p,int r){
  int x = A[r].second;
  int i = p - 1;
 
  for(int j = p ; j < r ; j++){
    if(A[j].second <= x){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
 
  return i + 1;
}
 
void QuickSort(vector<P> &A,int p,int r){
  if(p < r){
    int q = solve(A,p,r);
    QuickSort(A,p,q-1);  
    QuickSort(A,q+1,r);  
  }
}
 
void MergeSort(vector<P> &A){
  int n = (int)A.size();
 
  if(n <= 1) return;
 
  vector<P> L(A.begin(), A.begin() + n / 2);
  vector<P> R(A.begin() + n / 2, A.end());
 
  MergeSort(L);
  MergeSort(R);
 
  int l = (int)L.size(), r = (int)R.size();
  for(int i = 0,j = 0,k = 0 ; i < n ; i++){
    if(k == r){
      A[i] = L[j++];
    }else if(j == l){
      A[i] = R[k++];
    }else if(L[j].second <= R[k].second){
      A[i] = L[j++];
    }else{
      A[i] = R[k++];
    }
  }
}
 
int main(){
  int n;
 
  cin >> n;
  vector<P> v(n);
  for(int i = 0 ; i < n ; i++){
    cin >> v[i].first >> v[i].second;
  }
 
  vector<P> check = v;
  QuickSort(v,0,n-1);
  MergeSort(check);
 
  if(v == check){
    cout << "Stable" << endl;
  }else{
    cout << "Not stable" << endl;
  }
 
  for(int i = 0 ; i < n ; i++){
    cout << v[i].first << " " << v[i].second << endl;
  }
 
  return 0;
}