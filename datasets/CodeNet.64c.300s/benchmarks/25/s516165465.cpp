#include<iostream>
 
 int main(){
    int a[4],b[4],hit,blow,i,j;
    while(std::cin>>a[0]){
    for(i=1;i<4;i++){
    std::cin>>a[i];
    }for(i=0;i<4;i++){
    std::cin>>b[i];
    }
    hit=0;
    blow=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j&&a[i]==b[j]){
            hit++;
            }if(i!=j&&a[i]==b[j]){
            blow++;
            }
        }
    }
    std::cout<<hit<<" "<<blow<<std::endl;
    }
    return 0;
}