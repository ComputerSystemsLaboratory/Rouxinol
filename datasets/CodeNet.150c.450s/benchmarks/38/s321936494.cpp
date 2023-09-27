#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main(void){
    
    int number;
    int hen[3];
    int temp;
    cin >> number;
    bool judge[1020];
    
    REP(i,number)
    {
        REP(i, 3)
        cin >> hen[i];
        REP(i, 2)
        REP(j, 2)
        {
            if(hen[j] < hen[j+1])
            {
                temp = hen[j+1];
                hen[j+1] = hen[j];
                hen[j] = temp;
            }
        }
        if(hen[0]*hen[0] == (hen[1]*hen[1] + hen[2]*hen[2]))
            judge[i] = true;
        else
            judge[i] = false;
        
    }
    REP(i, number)
    {
        if(judge[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
  
    
    return 0;
}