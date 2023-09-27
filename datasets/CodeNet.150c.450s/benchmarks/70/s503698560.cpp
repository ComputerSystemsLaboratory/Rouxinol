#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;


int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
char date[7][10] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};


int main(){
    int M,D,days=0;
    
    while(1){
        days=0;
        scanf("%d%d",&M,&D);
        if(M+D==0) break;
        
        for(int i=0;i<M-1;i++)
            days+=month[i];
    
        printf("%s\n",date[(days+D)%7]);
    }
    
    return 0;
}