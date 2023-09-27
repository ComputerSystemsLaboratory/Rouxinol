#include <iostream>
int main(void){
    int n,a,b,c=0,d=0;
    while(true){
        std::cin>>n;
        if(n==0){
            break;
        }
        else{
            for(int i=0;i<n;++i){
                std::cin>>a>>b;
                if(a>b){
                    c=c+a+b;
                }
                else if(b>a){
                    d=d+a+b; 
                }
                else{
                    c=c+a;
                    d=d+b;
                }
            }
        }
        std::cout<<c<<" "<<d<<std::endl;
        c=0;
        d=0;
    }
    return 0;
}