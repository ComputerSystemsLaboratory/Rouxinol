//itp1_7-c
#include <iostream>
#include <vector>
using namespace std;

int main(){
 int r,c;
 int x;
 cin>>r>>c;
 vector< vector<int> > a(r+1, vector<int>(c+1));

 for(int i=0;i<r;i++)
  for(int j=0;j<c;j++){
   cin>>x;
   a[i][j]=x;
  }
 for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
   a[i][c]+=a[i][j];
  
 for(int i=0;i<=c;i++)
  for(int j=0;j<r;j++)
   a[r][i]+=a[j][i];

 for(int i=0;i<=r;i++){
  for(int j=1;j<=c;j++){
   cout<<a[i][j-1]<<" ";
  }
  cout<<a[i][c]<<endl;
 }
 return 0;
}