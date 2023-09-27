#include <iostream>
int main(){
    int n;
    while(std::cin>>n){
        if(n==0){
            break;
        }
        else{
            int a[4];
            a[0]=n;
            for(int i=1;i<4;++i){
                std::cin>>a[i];
            }
            int b[4];
            for(int i=0;i<4;++i){
                std::cin>>b[i];
            }
            int c=0,d=0;
            for(int i=0;i<4;++i){
                for(int j=0;j<4;++j){
                    if(a[i]==b[j]){
                        if(i==j){
                            ++c;
                        }
                        else{
                            ++d;
                        }
                    }
                }
            }
            std::cout<<c<<" "<<d<<std::endl;
        }
    }
    return 0;
}