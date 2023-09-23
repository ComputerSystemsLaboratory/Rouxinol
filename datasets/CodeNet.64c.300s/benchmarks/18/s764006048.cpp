#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

/* DP ??????*/
/* ????????????????????§?????????*/


int main(void){
    
    int dannsuu;
    int times[31] = {0};
    int year;
    times[0] = 1;
    times[1] = 1;
    times[2] = 2;
    
    while( cin >>dannsuu,dannsuu)
    {
        FOR(i, 3, dannsuu+1)
        times[i] = times[i-1]+times[i-2] + times[i-3];
        
        
        year = (times[dannsuu] /(365*10));
        
        if((times[dannsuu] % (365 * 10)))
            year +=1;
        
        cout << year << endl;
        
    }
    return 0;
    
}