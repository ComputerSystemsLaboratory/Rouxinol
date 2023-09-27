#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <string>
class dice{
private:
    int a,b,c,d,e,f;
    std::vector <int> list={0,1,2,3,4,5};
    std::vector <int> listb={0,1,2,3,4,5};
public:
    dice(int i,int j,int k,int l,int m,int n){
        a=i;
        b=j;
        c=k;
        d=l;
        e=m;
        f=n;           for(int ine=0;ine<6;ine++){
            list[ine]=listb[ine];
        }
    }
    void print(){
//        std::cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<< f<<std::endl;
        if(list[0]==0)std::cout<<a<<std::endl;
        if(list[0]==1)std::cout<<b<<std::endl;
        if(list[0]==2)std::cout<<c<<std::endl;
        if(list[0]==3)std::cout<<d<<std::endl;
        if(list[0]==4)std::cout<<e<<std::endl;
        if(list[0]==5)std::cout<<f<<std::endl;
    }
    void move(int in){
        for(int ine=0;ine<6;ine++){
            list[ine]=listb[ine];
        }
        if(in==0){
           listb[0]=list[3];
           listb[2]=list[0];
           listb[3]=list[5];
           listb[5]=list[2];
        }
        if(in==1){
           listb[0]=list[4];
           listb[4]=list[5];
           listb[5]=list[1];
           listb[1]=list[0];
        }
        if(in==2){
            listb[0]=list[2];
            listb[2]=list[5];
            listb[5]=list[3];
            listb[3]=list[0];
        }
        if(in==3){
            listb[0]=list[1];
            listb[1]=list[5];
            listb[5]=list[4];
            listb[4]=list[0];
        }
        for(int ine=0;ine<6;ine++){
            list[ine]=listb[ine];
        }
    }
};

int main()
{
    std::string str,input;
    int aa,ba,ca,da,ea,fa,in;
    std::cin >>aa>>ba>>ca>>da>>ea>>fa;
    dice n(aa,ba,ca,da,ea,fa);
    std::cin >> str;
    for(int i=0;i<str.size();i++){
    input=str.substr(i,1);
    if(input=="E")in=0;
    if(input=="S")in=1;
    if(input=="W")in=2;
    if(input=="N")in=3;
    n.move(in);
    }
    n.print();
    return 0;
}