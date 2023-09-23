#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    
    int a[n][m],b[m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int k=0;k<m;k++){
        cin>>b[k];
    }
    
    int ans[n];
    
   for(int f=0;f<n;f++){
       ans[f]=0;
       for(int g=0;g<m;g++){
           ans[f]+=a[f][g]*b[g];
        }
    }
    
    for(int l=0;l<n;l++) cout<<ans[l]<<endl;
    
}