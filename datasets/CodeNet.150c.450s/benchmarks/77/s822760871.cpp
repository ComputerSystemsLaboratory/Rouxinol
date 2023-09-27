#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n, m, x, y, mer;
  char dim;
  cin >> n;
  vector<int> ans;
  while(n){
    vector< vector<int> > gem(21, vector<int>(21));
    for(int i = 0; i < n; i++){
      cin >> x >> y;
      gem[y][x] = 1;
    }
    cin >> m;
    int nowx = 10;
    int nowy = 10;
    for(int j = 0; j < m; j++){
      cin >> dim >> mer;
      for(int k = 1; k <= mer; k++){
        if(dim == 'N') nowy++;
        if(dim == 'E') nowx++;
        if(dim == 'S') nowy--;
        if(dim == 'W') nowx--;
        gem[nowy][nowx] = 0;
      }
    }
    int boo = 0;
    for(int i = 0; i <= 20; i++){
      for(int j = 0; j <= 20; j++){
        if(gem[i][j])boo = 1;
      }
    }
    ans.push_back(boo);
    cin >> n;
  }
  for(int i = 0; i < (int)ans.size(); i++){
    if(!ans[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

