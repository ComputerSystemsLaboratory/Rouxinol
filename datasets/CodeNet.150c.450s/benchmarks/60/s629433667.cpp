#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> adjlist;
vector<vector<int>> adjmatrix;
void input(int n){
  for(int i=0;i<n;i++){
    vector<int> list;
    int ln;
    cin>>ln;
    list.push_back(ln);
    cin>>ln;
    list.push_back(ln);
    for(int j=0;j<ln;j++){
      int an;
      cin>>an;
      list.push_back(an);
    }
    adjlist.push_back(list);
  }
}

void mk_am(int n){
  adjmatrix=vector<vector<int>>(n,vector<int>(n,0));
  for(vector<int> list:adjlist){
    for(int i=0;i<list[1];i++){
      adjmatrix[list[0]-1][list[2+i]-1]=1;
    }
  }
}
 
void print(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<adjmatrix[i][j];
      if(j!=n-1) cout<<' ';
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  input(n);
  mk_am(n);
  print(n);
  return 0;
}

