#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*****************************************/
/*         Function prototype            */
/*****************************************/

vector<vector<int> > list_to_mat(vector<vector<int> >& adj);
void dump_mat( vector<vector<int> >& mat);
void dfs(vector<vector<int> >& adj_list, int now, vector<int>& d, vector<int>& f, int *t);
void dfs_mat(vector<vector<int> >& adj_mat, int now, vector<int>& d, vector<int>& f, int* t);
/*****************************************/
/*            Main Function              */
/*****************************************/


int main(){
  int n; cin >> n;

  vector<vector<int> > list(n+1);
  for(int i=0; i<n; i++){
    int u,k; cin >> u >> k;
    vector<int> tmp(k);
    for(int j=0; j<k; j++) cin >> tmp[j];
    sort(tmp.begin(),tmp.end());
    list[u] = tmp;
  }
  int t=1;
  vector<int> d(n+1,-1);
  vector<int> f(n+1,-1);
  /*
  vector<vector<int> > adj_mat = list_to_mat(list); 
  
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout << adj_mat[i][j] << " ";
    }
    cout << endl;
    }*/

  //  dfs_mat(adj_mat,1,d,f,&t);
  for(int i=1; i<=n; i++)
    if(d[i] == -1)
      dfs(list,i,d,f,&t);
  
  for(int i=1; i<=n; i++){
    cout << i << " " << d[i] << " " << f[i] << endl;
  }
}



/*****************************************/
/*            Implimentation             */
/*****************************************/


void dfs_mat(vector<vector<int> >& adj_mat, int now, vector<int>& d, vector<int>& f, int* t){
  d[now] = *t;
  (*t)++;
  
  for(int i=1; i<adj_mat.size(); i++){
    if(adj_mat[now][i] == 1 && d[i] == -1)
      dfs_mat(adj_mat, i, d, f, t);
  }

  f[now] = *t;
  (*t)++;
  return ;
}


void dfs(vector<vector<int> >& adj_list, int now, vector<int>& d, vector<int>& f, int* t){
  d[now] = *t;
  (*t)++;
  
  for(auto v : adj_list[now]){
    if(d[v] != -1 || v == 0) continue;
    dfs(adj_list, v, d, f, t);
  }
  f[now] = *t;
  (*t)++;
  return ;
}


vector<vector<int> > list_to_mat(vector<vector<int> >& adj){
  const int mat_size = (int)adj.size();
  vector<vector<int> > ans(mat_size,vector<int>(mat_size,0));
  for(int i=0; i<mat_size; i++){
    for(int j=0; j<adj[i].size(); j++){
      ans[i][adj[i][j]] = 1;
      ans[adj[i][j]][i] = 1;
    }
  }
  return ans;
}


void dump_mat( vector<vector<int> >& mat){
  
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