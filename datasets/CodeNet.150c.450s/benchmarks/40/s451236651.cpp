#include <iostream>
#include <string>

class Dice{
    public:
    int a[7];//up,flont,right,left,back,down
    void roll(char d);
};

void Dice::roll(char d){
    int tmp;
    if(d=='N'){
        tmp=a[1];
        a[1]=a[2];
        a[2]=a[6];
        a[6]=a[5];
        a[5]=tmp;
    }
    else if(d=='S'){
        tmp=a[1];
        a[1]=a[5];
        a[5]=a[6];
        a[6]=a[2];
        a[2]=tmp;
    }
    else if(d=='W'){
        tmp=a[1];
        a[1]=a[3];
        a[3]=a[6];
        a[6]=a[4];
        a[4]=tmp;
    }
    else if(d=='E'){
        tmp=a[1];
        a[1]=a[4];
        a[4]=a[6];
        a[6]=a[3];
        a[3]=tmp;
    }
}

int main(void){
    int i;
    Dice dice;
    std::string s;
    
    for(i=1;i<7;i++){
        std::cin>>dice.a[i];
    }
    std::cin>>s;
    
    int l=s.length();
    for(i=0;i<l;i++){
        dice.roll(s[i]);
    }
    
    std::cout<<dice.a[1]<<std::endl;
}
