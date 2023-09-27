#include<bits/stdc++.h>
using namespace std;

const int N=505;
int mat[N][2];
int mem[N][N];

int mcm(int l, int r){
  if(l==r)  return mem[l][r]=0;
  if(mem[l][r]!=-1) return mem[l][r];
  int ret = INT_MAX;
  for (int i = l; i < r; ++i){
    int now = mcm(l, i);
    now += mcm(i+1, r);
    now += mat[l][0]*mat[i][1]*mat[r][1];
    ret = min(ret, now);
  }
  return mem[l][r]=ret;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;  cin >> n;
  for (int i = 0; i < n; ++i){
    cin >> mat[i][0] >> mat[i][1];
  }
  memset(mem, -1, sizeof(mem));
  cout << mcm(0, n-1) << "\n";
  return 0;
}
