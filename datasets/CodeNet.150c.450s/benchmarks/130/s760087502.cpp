//itp1_6-d
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 vector<vector<int> > a(n,vector<int>(m));
 vector<int> b(m);
 vector<int> c(n);

 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   int x;
   cin>>x;
   a[i][j]=x;
  }
 }
 for(int i=0;i<m;i++){
  int x;
  cin>>x;
  b[i]=x;
 }
 for(int i=0;i<n;i++){
  int temp=0;
  for(int j=0;j<m;j++){
   temp+=(a[i][j]*b[j]);
  }
  c[i]=temp;
 }

 for(int i=0;i<n;i++)
  cout<<c[i]<<endl;
 
 return 0;
}