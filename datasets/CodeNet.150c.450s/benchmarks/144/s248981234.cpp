//itp1_7-d
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int n,m,l;
 
 cin>>n>>m>>l;
 vector< vector<long long> > a(n, vector<long long>(m));
 vector< vector<long long> > b(m, vector<long long>(l));
 vector< vector<long long> > c(n, vector<long long>(l));

 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
   cin>>a[i][j];
 for(int i=0;i<m;i++)
  for(int j=0;j<l;j++)
   cin>>b[i][j];

 for(int i=0;i<n;i++)
  for(int j=0;j<l;j++)
   for(int k=0;k<m;k++)
    c[i][j]+=a[i][k]*b[k][j];

 for(int i=0;i<n;i++){
  for(int j=1;j<l;j++){
   cout<<c[i][j-1]<<" ";
  }
  cout<<c[i][l-1]<<endl;
 }
 return 0;
}