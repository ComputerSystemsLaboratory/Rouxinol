#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > list_to_mat(vector<vector<int> >& adj){

  const int mat_size = (int)adj.size();
  vector<vector<int> > ans(mat_size,vector<int>(mat_size,0));
  for(int i=0; i<mat_size; i++){
    for(int j=0; j<adj[i].size(); j++){
      ans[i][adj[i][j]-1] = 1;
    }
  }
  return ans;
}

void dump_mat( vector<vector<int> > mat){
  
  const int mat_size = (int)mat.size();
  for(int i=0; i<mat_size; i++){
    for(int j=0; j<mat[i].size(); j++){
      cout << mat[i][j];
      if(j!=mat[i].size()-1)
	cout << " ";
      else
	cout << "\n";
    }
  }

}

int main(){
  int n; cin >> n;

  vector<vector<int> > list;
  for(int i=1; i<=n; i++){
    int u,k; cin >> u >> k;
    vector<int> tmp(k);
    for(int j=0; j<k; j++) cin >> tmp[j];
    list.push_back(tmp);
  }
  vector<vector<int> > mat = list_to_mat(list);
  dump_mat(mat);
}