#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<pair<char,int>> A;
unordered_map<int,vector<char>> chk;

//vector<pair<char,int>> Bubble;

int partition(int p,int r){
  int x=A[r].second;
  int i=p-1;
  for(int j=p;j<r;j++){
    if (A[j].second<=x){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

void quickSort(int p,int r){
  if (p<r){
    int q=partition(p,r);
    quickSort(p,q-1);
    quickSort(q+1,r);
  }
}

/*void BubbleSort(int n){
  bool flag=false;
  while (!flag){
    flag=true;
    for(int i=n-2;i>=0;i--){
      if (Bubble[i].second>Bubble[i+1].second){
	swap(Bubble[i],Bubble[i+1]);
	flag=false;
      }
    }
  }
  
  }*/

int main(){
  int n;
  cin>>n;
  A.resize(n);
  char c;
  int v;
  for(int i=0;i<n;i++){
    cin>>c>>v;
    A[i]=make_pair(c,v);
    chk[v].push_back(c);
  }
  //  Bubble=A;
  quickSort(0,n-1);
  //BubbleSort(n);
  /*bool flag=true;
  for(int i=0;i<n;i++){
    if (A[i]!=Bubble[i]){
      flag=false;
      break;
    }
  }
  if (flag) cout<<"Stable"<<endl;
  else cout<<"Not stable"<<endl;*/
  bool flag=true;
  for(int i=0;i<n;i++){
    if (chk[A[i].second][0]!=A[i].first){
      flag=false;
      break;
    }else {
      chk[A[i].second].erase(chk[A[i].second].begin());
    }
  }
  if (flag)
    cout<<"Stable"<<endl;
  else
    cout<<"Not stable"<<endl;
  
  for(int i=0;i<n;i++){
    cout << A[i].first << " "<<A[i].second<<endl;
  }
  
  return 0;
}

