#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main(void){
    
    unsigned number1,number2;
    int keta[205];
    int temp,tempcounter = 0;
    int count =0;
    char judge[20];
    
    while(cin >> number1 >> number2)
    {
        temp = number1+number2;
        while(temp != 0)
        {
            temp = temp / 10;
            if(temp)
                tempcounter++;
            else{
                keta[count] = tempcounter;
                tempcounter = 0;
            }
            
        }
        count++;
        if(count == 201)
            break;
    }
    REP(i, count)
    cout << keta[i]+1<< endl;
    return 0;
}