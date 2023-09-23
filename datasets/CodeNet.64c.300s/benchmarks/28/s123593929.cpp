#include<iostream>
 
int main(){
    int W,H,x,y,r;
    int flag=1;
    std::cin>>W>>H>>x>>y>>r;

    if(x-r<0||y-r<0){
	flag=0;
    }
    
    if(x+r>W||y+r>H){
	flag=0;
    }

    if(flag==1){
    std::cout << "Yes" << std::endl;
    }else{
    std::cout << "No" << std::endl;
    }
    return 0;
    }