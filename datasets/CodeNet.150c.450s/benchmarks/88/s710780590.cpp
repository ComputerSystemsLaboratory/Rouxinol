#include<iostream> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<map> 
#include<set> 
#include<queue> 
#include<stack> 
#include<utility> 
#include<algorithm> 
#include<functional> 
#include<cstdio> 
#include<cstdlib> 
#include<cstring> 
#include<cmath> 
#include<cctype> 
  
using namespace std; 
  
#define FOR(i,a,b) for(int i=(a);i<(b);i++) 
#define REP(i,n) FOR(i,0,n) 
  
int main(){ 
    int h, w; 
      
    while(true) { 
        int tmpTaikaku; 
        int tmpH, tmpW; 
          
        cin>>h; 
        cin>>w; 
        if(h==0 && w==0) 
            break; 
        int taikakuMoto = h*h+w*w; 
          
        tmpTaikaku = 151*151+151*151; 
        tmpH = h; 
        for(int hh=1; hh<=150; hh++) { 
            for(int ww=hh+1; ww<=150; ww++) { 
          /*      if(taikakuMoto<hh*hh+ww*ww && hh*hh+ww*ww<tmpTaikaku) { 
                    tmpTaikaku = hh*hh+ww*ww; 
                    tmpH = hh; 
                    tmpW = ww; 
                } 
                else if(taikakuMoto<hh*hh+ww*ww && hh*hh+ww*ww==tmpTaikaku && hh<tmpH) { 
                    tmpH = hh; 
                    tmpW = ww; 
                } 
                else if(taikakuMoto == hh*hh+ww*ww && hh*hh+ww*ww < tmpTaikaku && tmpTaikaku!=151*151+151*151) { 
                    tmpTaikaku = hh*hh+ww*ww; 
                    tmpH = hh; 
                    tmpW = ww; 
                } 
                else if(taikakuMoto == hh*hh+ww*ww && hh<h) { 
                    tmpTaikaku = hh*hh+ww*ww; 
                    tmpH = hh; 
                    tmpW = ww; 
                } 
           */
                int tmpHW = hh*hh+ww*ww; 
                if(taikakuMoto<tmpHW && ((tmpHW<tmpTaikaku) || (tmpHW==tmpTaikaku && hh<tmpH))) { 
                    tmpTaikaku = tmpHW; 
                    tmpH = hh; 
                    tmpW = ww; 
                } 
                if(taikakuMoto==tmpHW && ((tmpHW<tmpTaikaku && hh!=h && ww!=w && h<hh) || (tmpHW==tmpTaikaku && h<hh && hh<tmpH))) { 
                    tmpTaikaku=tmpHW; 
                    tmpH=hh; 
                    tmpW=ww; 
                } 
                /* 
                if(taikakuMoto==tmpHW && hh<tmpH) { 
                    tmpTaikaku=tmpHW; 
                    tmpH=hh; 
                    tmpW=ww; 
                } 
                if(taikakuMoto==tmpHW && tmpHW==tmpTaikaku && hh<tmpH) { 
                    tmpTaikaku = tmpHW; 
                    tmpH = hh; 
                    tmpW = ww; 
                } 
                 */
            } 
        } 
        cout<<tmpH<<" "<<tmpW<<endl; 
    } 
      
      
      
      
      
    return 0; 
} 