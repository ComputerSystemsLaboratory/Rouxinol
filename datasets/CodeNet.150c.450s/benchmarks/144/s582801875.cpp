#include<iostream>
using namespace std;

int main(){
    int n,m,l;
    int A[101][101], B[101][101];
    
    cin>>n>>m>>l;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) {
            cin>>A[i][j];
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=l; j++) {
            cin>>B[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=l; j++){
            long long sum=0;
            for(int k=1; k<=m; k++){
                sum+=A[i][k]*B[k][j];
            }
            
            if(j==1){
                cout<<sum;
            } else {
                cout<<" "<<sum;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
