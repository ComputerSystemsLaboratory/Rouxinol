#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main(void){
    
    int student = 0;
    int maxN,minN = 0;
    int gap = 0,gapMax = 0,gapnumber  = 0;
    int score[1020] = {0};
    
    while(cin >> student >>minN >>maxN,student+maxN+minN)
    {
        REP(i,student)
        cin >> score[i];
  
    
    FOR(j,minN,maxN+1)
        {
            gap = score[j-1] - score[j];

            if(gapMax <= gap)
            {
                gapnumber = j;
                gapMax = gap;
                
            }
        }
        cout << gapnumber << endl;
        gapMax  =-1;
        gapnumber = 0;
    
    }
    return 0;
}