#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>

using namespace std;

int max (int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int h,w;
    while(scanf("%d%d",&h,&w)==2){
        if(h==0 && w==0){
            break;
        }
        else
        {
            int count1=0;
            int count2 = 0;
            int len = h*h + w*w;
            
            int min = 1000000;
            
            for(int i=1;i<=150;i++){
                for(int j=i+1;j<=150;j++){
                   
                    if(i*i + j*j > len && i*i + j*j<min){
                        count1 = i;
                        count2 = j;
                        min = i*i + j*j ;
                        
                    }
                }
               
            }
            
            int ok = 0;
            for(int i=1;i<=max(h,w);i++){
                for(int j=i+1;j<=max(h,w);j++){
                    
                    if(i*i + j*j == len && ((i!=h)||(j!=w))){
                        count1 = i;
                        count2 = j;
                        ok = 1;
                        break;
                    }
                }
                if(ok == 1){
                    break;
                }
            }
            printf("%d %d\n",count1,count2);
            
            
            
        }
    }
    
    return 0;
}

