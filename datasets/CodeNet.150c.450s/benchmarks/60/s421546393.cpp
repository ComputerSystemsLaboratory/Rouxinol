#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j]=0;
        }
    }
    int tmp,s,e;
    for(int i=0;i<n;i++){
        std::cin>>s;
        std::cin>>tmp;
        for(int j=0;j<tmp;j++){
            std::cin>>e;
            A[s-1][e-1]=1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                std::cout<<A[i][j];
            }else std::cout<<" "<<A[i][j];
        }
        std::cout<<std::endl;
    }
    return 0;
}
