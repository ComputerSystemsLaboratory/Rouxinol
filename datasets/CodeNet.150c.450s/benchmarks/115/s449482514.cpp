#include <iostream>
#include <cstdio>
#include <string>
#define MAX 1001

using namespace std;


string a,b;
int lcs_memo[1001][1001];

int lcs(int i,int j){
  if(i==0 || j==0) return 0;
  if(lcs_memo[i][j]!=-1) return lcs_memo[i][j];
  if(a[i]==b[j]){
    lcs_memo[i][j] = lcs(i-1,j-1)+1;
  }else{
    lcs_memo[i][j] = max(lcs(i,j-1),lcs(i-1,j));
  }
  return lcs_memo[i][j];
}

void clear(){
  for(int i=0;i<1001;i++){
  for(int j=0;j<1001;j++){
    lcs_memo[i][j] = -1;
  }}
}

int main(){
  int n; cin>>n;
  
  for(int i=0;i<n;i++){
    clear();
    cin>>a>>b;
    a = ' ' + a;
    b = ' ' + b;
    cout<<lcs(a.size()-1,b.size()-1)<<endl;
  }
}