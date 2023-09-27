#include <iostream>
#include <string>

class Dice{
    public:
    int a[7];//-,up,flont,right,left,back,down
    void roll(char d);
    void rotate(void);
};

void Dice::rotate(void){
    int tmp;
    tmp=a[2];
    a[2]=a[3];
    a[3]=a[5];
    a[5]=a[4];
    a[4]=tmp;
}

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
    int i,n;
    Dice dice;
    
    for(i=1;i<7;i++){
        std::cin>>dice.a[i];
    }
    std::cin>>n;
    
    int u,f;
    bool b;
    for(i=0;i<n;i++){
        std::cin>>u>>f;
        b=0;
        while(dice.a[1]!=u){
            if(b){
                dice.roll('N');
            }
            else{
                if(dice.a[3]==u||dice.a[4]==u)dice.roll('W');
                b=1;
            }
        }
        while(dice.a[2]!=f){
            dice.rotate();
        }
        std::cout<<dice.a[3]<<std::endl;
    }
    return 0;
}
