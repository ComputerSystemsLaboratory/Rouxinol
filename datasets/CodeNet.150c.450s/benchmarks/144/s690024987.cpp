#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int n,m,l;
    int a[100][100],b[100][100];
    long long int c[100][100];
        for(int i=0;i<100;i++){
      for(int j=0;j<100;j++){
          a[i][j]=0;
           b[i][j]=0;
            c[i][j]=0;
      }
    }
    cin>>n>>m>>l;
    
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>a[i][j];
      }
    }
    
    for(int i=0;i<m;i++){
      for(int j=0;j<l;j++){
          cin>>b[i][j];
      }
    }
    
     
    for(int i=0;i<n;i++){
      for(int j=0;j<l;j++){
          for(int k=0;k<m;k++){
          c[i][j]+=a[i][k]*b[k][j];
      }
     }
    }
    
    for(int i=0;i<n;i++){
      for(int j=0;j<l;j++){
          cout<<c[i][j];
          if(j!=l-1) cout<<" ";
      }
      cout<<endl;
    }
    return 0;
}