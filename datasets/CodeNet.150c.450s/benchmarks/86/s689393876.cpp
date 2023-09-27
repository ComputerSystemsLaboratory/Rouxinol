#include<iostream>
#include<vector>
using namespace std;
int n,m,p;
vector<int> x;
bool input(){
  x.clear();
  if(!(cin>>n>>m>>p))return false;
  if(n==0&&n==m&&m==p)return false;
  for(int i=0;i<n;i++){
    int tmp;
    cin>>tmp;
    x.push_back(tmp);
  }
  return true;
}

int solve(){
  int all=0;
  for(int i=0;i<x.size();i++){
    all+=x[i];
  }
  int hit = x[m-1];
  all*=(100-p);
  if(hit==0)return 0;
  else return all/hit;
}

int main(){
  while(input())cout<<solve()<<endl;
}