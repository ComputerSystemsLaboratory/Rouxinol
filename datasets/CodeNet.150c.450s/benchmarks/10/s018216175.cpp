#include<iostream>
int main(){
    int a[4][3][10]={};
    int n,b,f,r,v;
   
    std::cin >> n;

      for(int i=1;i<=n;i++){
        std::cin >> b >> f >> r >> v;
        a[b-1][f-1][r-1]=a[b-1][f-1][r-1]+v;
      }

    for(int k=0;k<=3;k++){
        for(int l=0;l<=2;l++){
            for(int m=0;m<=9;m++){
               std::cout << " " << a[k][l][m];
            }
            std::cout << std::endl;
        }
        if(k!=3){
            for(int x=1;x<=20;x++){
               std::cout << "#" ;
            }
            std::cout << std::endl;
        }

    }

}
