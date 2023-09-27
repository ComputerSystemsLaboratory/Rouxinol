#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <string>
class dice{
private:
    int a,b,c,d,e,f,inas,inbs,ans;
    std::vector <int> list={0,1,2,3,4,5};
    std::vector <int> listb={0,1,2,3,4,5};
    std::vector <int> listc={0,1,2,3,4,5};
public:
    dice(int i,int j,int k,int l,int m,int n){
        a=i;
        b=j;
        c=k;
        d=l;
        e=m;
        f=n;
        for(int ine=0;ine<6;ine++){
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
    void rightp(int ina,int inb){
            listc[0]=a;
            listc[1]=b;
            listc[2]=c;
            listc[3]=d;
            listc[4]=e;
            listc[5]=f;
            for(int inf=0;inf<6;inf++){
                if(ina==listc[inf])inas=inf;
                if(inb==listc[inf])inbs=inf;
            }
            //inas,inbs = motono junban(ue nara 0 mae nara 1)
            for(int ing=0;ing<6;ing++){
                listb[ing]=list[ing];
            }

            if(inas==0&&inbs==1)ans=2;
            if(inas==0&&inbs==2)ans=4;
            if(inas==0&&inbs==4)ans=3;
            if(inas==0&&inbs==3)ans=1;

            if(inas==1&&inbs==5)ans=2;
            if(inas==1&&inbs==2)ans=0;
            if(inas==1&&inbs==0)ans=3;
            if(inas==1&&inbs==3)ans=5;

            if(inas==2&&inbs==1)ans=5;
            if(inas==2&&inbs==5)ans=4;
            if(inas==2&&inbs==4)ans=0;
            if(inas==2&&inbs==0)ans=1;

            if(inas==3&&inbs==1)ans=0;
            if(inas==3&&inbs==0)ans=4;
            if(inas==3&&inbs==4)ans=5;
            if(inas==3&&inbs==5)ans=1;

            if(inas==4&&inbs==0)ans=2;
            if(inas==4&&inbs==2)ans=5;
            if(inas==4&&inbs==5)ans=3;
            if(inas==4&&inbs==3)ans=0;

            if(inas==5&&inbs==4)ans=2;
            if(inas==5&&inbs==2)ans=1;
            if(inas==5&&inbs==1)ans=3;
            if(inas==5&&inbs==3)ans=4;

            std::cout << listc[ans] << std::endl;
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
    int aa,ba,ca,da,ea,fa,cou,ina,inb;
    std::cin >>aa>>ba>>ca>>da>>ea>>fa;
    dice n(aa,ba,ca,da,ea,fa);
    std::cin >> cou;
    for(int ga=0;ga<cou;ga++){
        std::cin >> ina >> inb;
        n.rightp(ina,inb);
    }
    return 0;
}