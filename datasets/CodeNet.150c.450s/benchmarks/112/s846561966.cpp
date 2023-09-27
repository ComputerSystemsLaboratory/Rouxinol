
#include <iostream>
#include <string>

int main(){
    
    int num1,num2;
    
    char ch[1000][2],ch2[100000];
    
    while(true){
    
    std::cin>>num1;
    
        if(num1==0)
            break;
        
    for(int i=0;i<num1;i++)
        std::cin>>ch[i][0]>>ch[i][1];
    
    std::cin>>num2;
    
    std::string str(num2,'a');
    
    for(int i=0;i<num2;i++){
        std::cin>>ch2[i];
        str[i]=ch2[i];
        for(int j=0;j<num1;j++){
            if(str[i]==ch[j][0]){
                str[i]=ch[j][1];
                goto flag1;
            }
        }
    flag1:;
    }
    
    std::cout<<str<<std::endl;
        
    }
    
    return 0;
}