
#include <iostream>
using namespace std;

int main()
{
    int h,w,t,maxh=0,maxw=0;
    long taikakusen[200][200],max=0;
    
    //??¢?´¢ i=w j=h
    for(int i=1;i<=150;i++){
        for(int j=1;j<i;j++){
            taikakusen[i][j] = i*i + j*j;
        }
    }
    
    cin>>h>>w;
    
    while(h != 0 && w != 0){
        t = h*h + w*w;
        for(int i=1;i<=150;i++){
            for(int j=1;j<i;j++){
                if(t<taikakusen[i][j]){
                    if(max==0){
                        maxh=j;
                        maxw=i;
                        max=taikakusen[i][j];
                    }
                    else if(taikakusen[i][j]==max){
                        if(j<maxh){
                            maxh=j;
                            maxw=i;
                        }
                    }
                    else if(taikakusen[i][j]<max){
                        maxh=j;
                        maxw=i;
                        max=taikakusen[i][j];
                    }
                }
                if(t==taikakusen[i][j] && j>h){
                    maxh=j;
                    maxw=i;
                    max=taikakusen[i][j];
                }
            }
        }
        
        cout<<maxh<<" "<<maxw<<"\n";
        maxh=0;
        maxw=0;
        max=0;
        
        cin>>h>>w;
    }
    
    return 0;
}