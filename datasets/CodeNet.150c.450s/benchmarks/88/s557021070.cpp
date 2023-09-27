#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

void func(int h,int w){
    double min_orig;
    double min_l;
    int min_w,min_h;
    min_orig = sqrt(w*w + h*h);
    min_l = sqrt(150*150 + 150*150);
    for(int i=1;i<=150;i++){
        for(int j=i+1;j<=150;j++){
            if(i!=h||j!=w){
                if(min_orig<=sqrt(i*i + j*j)&&min_l>=sqrt(i*i+j*j)){
                    if(min_orig==sqrt(i*i + j*j)&&min_l==sqrt(i*i+j*j)){
                        if(i>h&&i<min_h){
                            min_l = sqrt(i*i + j*j);
                            min_w = j;
                            min_h = i;                    
                        }
                    }else if(min_orig==sqrt(i*i + j*j)){
                        if(i>h){
                            min_l = sqrt(i*i + j*j);
                            min_w = j;
                            min_h = i;                    
                        }
                    }else if(min_l==sqrt(i*i+j*j)){
                        if(i<min_h){
                            min_l = sqrt(i*i + j*j);
                            min_w = j;
                            min_h = i;                    
                        }                        
                    }else{
                        min_l = sqrt(i*i + j*j);
                        min_w = j;
                        min_h = i;                        
                    }
                }
            // }
            }
        }
    }
    cout << min_h << " " << min_w << endl;
}

int main(){
    int h,w;
    while(1){
        cin >> h >> w;
        if(w==0&&h==0) break;
        func(h,w);
    }
    
}





