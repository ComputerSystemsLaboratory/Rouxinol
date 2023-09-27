
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
    
#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)
#define risi (0.05)

using namespace std;


int main(void)
{
    int a,b,c,d;
    int i,j,k,l;
    int number;
    int answercounter = 0;
    int answerarray[1000] = {0};
    int temp = 0;
    while(cin >> number)
    {
        for(i = 0;i <= 9;i++)
            if(i <= number)
                for(j = 0;j<=9;j++)
                    if(i+j<= number)
                        for(k = 0;k<=9;k++)
                            if(i+j+k <= number)
                                for(l = 0;l<=9;l++)
                                    if((i+j+k+l) == number)
                                        temp++;
        answerarray[answercounter] = temp;
        temp = 0;
        answercounter++;
        
                                        
    }
    REP(i,answercounter)
    cout << answerarray[i] << endl;
    return 0;
}