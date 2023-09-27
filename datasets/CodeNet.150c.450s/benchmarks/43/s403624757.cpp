#include <iostream>

int main(){
    
    while(true){
    
    int num,a,b,resa=0,resb=0;
    
    std::cin>>num;
    
    if(num==0)
        break;
    
    for(int i=0;i<num;i++){
        std::cin>>a>>b;
        if(a>b)
            resa+=a+b;
        else
        if(a<b)
            resb+=a+b;
        else
            if(a==b)
                resa+=a,resb+=b;
    }
    
    std::cout<<resa<<' '<<resb<<std::endl;
        
    }
    
    return 0;
}