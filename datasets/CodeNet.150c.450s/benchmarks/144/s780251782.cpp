#include<iostream>
using namespace std;
int main(){
    long long n,m,l,i,j,k,a,b;
    cin>>n >>m>>l;
    
    int aik[n][m];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            aik[i-1][j-1]=0;
            
        }
        
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a;
            aik[i-1][j-1]=a;
            
        }
           
    }
    int bkj[m][l];
    for(i=1;i<=m;i++){
        for(j=1;j<=l;j++){
            bkj[i-1][j-1]=0;
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=l;j++){
            cin>>b;
            bkj[i-1][j-1]=b;
            
        }
    }
    
    
    
    long long int cij[n][l];
    for(i=1;i<=n;i++){
        for(j=1;j<=l;j++){
            cij[i-1][j-1]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=l;j++){
            for(k=1;k<=m;k++){
                cij[i-1][j-1]+=aik[i-1][k-1]*bkj[k-1][j-1];
            }
            
           
        }
    }
    for(int i = 0; i < n; i++){
	    for(int j = 0; j < l-1; j++){
			cout<<cij[i][j]<<" ";
		}
		cout<<cij[i][l-1]<<endl;
	}
    return 0;
}

