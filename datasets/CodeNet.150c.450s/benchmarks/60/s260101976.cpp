//ALDS1_11A
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int n,u,k,v;
 cin>>n;
 vector< vector<bool> > M(n,vector<bool>(n));
 for(int i=0;i<n;i++){
  cin>>u>>k;
  u--;
  for(int j=0;j<k;j++){
   cin>>v;
   v--;
   M[u][v]=true;
  }
 }

 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   if(j) cout<<" ";
   cout<<M[i][j];
  }
  cout<<endl;
 }
 return 0;
}