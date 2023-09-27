#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <string>

using namespace std;

struct Dize{
    int sf[6];

    void roll(char ch){
        int tmp=0;
        switch (ch) {
            case 'N':
                tmp=sf[0];
                sf[0]=sf[1];
                sf[1]=sf[5];
                sf[5]=sf[4];
                sf[4]=tmp;
                tmp=0;
                break;
            case 'E':
                tmp=sf[0];
                sf[0]=sf[3];
                sf[3]=sf[5];
                sf[5]=sf[2];
                sf[2]=tmp;
                tmp=0;
                break;
            case 'S':
                tmp=sf[0];
                sf[0]=sf[4];
                sf[4]=sf[5];
                sf[5]=sf[1];
                sf[1]=tmp;
                break;
            case 'W':
                tmp=sf[0];
                sf[0]=sf[2];
                sf[2]=sf[5];
                sf[5]=sf[3];
                sf[3]=tmp;
                break;
            default:
                break;
        }
    }
    
     int ref_2(int i,int j){
         bool jud=true;
         for(int k=0;k<4;++k){
             roll('N');
             if(sf[0]==i){
                 jud=false;
                 break;
             }
         }
         if(jud){
             roll('E');
             for(int k=0;k<4;++k){
                 roll('N');
                 if(sf[0]==i){
                     jud=false;
                     break;
                 }
             }
         }
         
         int yoko_sf[5]={1,2,4,3,1};
         /*
         for(int k=0;k<6;++k){
             cout<<sf[k]<<" ";
         }
         cout<<endl;
         */
         for(int k=0;k!=5;++k){
             
             if(sf[yoko_sf[k]]==j){
                 return sf[yoko_sf[k+1]];
                 
             }
             
         }
         return 0;
     }
};


int main(){
    
    Dize dz;
    
    for(int i=0;i!=6;++i){
        cin>>dz.sf[i];
    }
    int a,x,y;
    cin>>a;
    
    for(int i=0;i!=a;++i){
        cin>>x>>y;
        cout<<dz.ref_2(x,y)<<endl;
    }
    
  
    
}

