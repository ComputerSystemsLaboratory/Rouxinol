#include<iostream>
 
int main(){
    int yamikin,i,n;
    
    std::cin>>n;
    yamikin=100000;
    
    for(i=0;i<n;i++){
        yamikin=yamikin*1.05; 
        if(yamikin%1000!=0){
           yamikin=yamikin-(yamikin%1000)+1000; 
           
           }
         }
     std::cout<<yamikin<<std::endl;
           
return 0;
}       