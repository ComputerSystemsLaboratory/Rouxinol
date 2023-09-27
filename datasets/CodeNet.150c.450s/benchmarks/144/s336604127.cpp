#include <iostream>
using namespace std;
int main(){
 
  int n,m,l,i,j,k;
  long am[100][100],bm[100][100],cm[100][100]={};
 
  cin>>n>>m>>l;
  for(i=0; i<n; i++)for(j=0; j<m; j++)cin>>am[i][j];
  for(j=0; j<m; j++)for(k=0; k<l; k++)cin>>bm[j][k];
  for(i=0; i<n; i++)for(k=0; k<l; k++)for(j=0; j<m; j++)cm[i][k]+=am[i][j]*bm[j\
][k];
 
  for(i=0; i<n; i++){
    for(k=0; k<l; k++){
            if(k==l-1){
        cout<<cm[i][k]<<"\n";
        break;
      }
 
      cout<<cm[i][k]<<" ";
    }
  }
}
