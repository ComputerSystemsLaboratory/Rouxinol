#include<iostream>

int main(void){
    int n,m,l;
    std::cin>>n>>m>>l;
    long A[n][m],B[m][l],sum=0;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            std::cin>>A[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            std::cin>>B[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
        sum=0;
            for(k=0;k<m;k++){
                sum+=A[i][k]*B[k][j];
            }
            if(j)std::cout<<" ";
           std::cout<<sum;
          
        }
        std::cout<<std::endl;
    }
    return 0;
}