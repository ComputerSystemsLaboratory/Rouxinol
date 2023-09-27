#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cmath>


using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)



int hikaku(int a,int b,int c,int d){
    int A=a*a+b*b;
    int C=c*c+d*d;

    if(A>C)return 1;
    if(C>A)return -1;
    if(a>c)return 1;
    if(c>a)return -1;
    return 0;
}


int main(void){

    int h,w;

    for(;;){
        cin >> h >> w;
        if(h==0)return 0;
        int retH=1000,retW=1000;
        for(int H=1;H<=150;H++){
            for(int W=H+1;W<=150;W++){
                if(h==H && w == W)continue;

                if(hikaku(h,w,H,W)<0){
                    if(hikaku(H,W,retH,retW)<0){
                        retH=H;
                        retW=W;
                    }
                }

            }
        }
        cout << retH <<" "<<retW<<endl;
    }

       	return 0;
}