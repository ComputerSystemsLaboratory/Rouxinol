
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


using namespace std;


int main(void)
{
    
    int  number1, number2;
    long long answer2 = 0; int answer1;
    int temp;
    int i;
    long long answer2array[1000] = {1};
    int answer1array[1000] = {0};
    int counter = 0;
    
    while(cin >> number1 >> number2)
    {
        /*?????§??¬?´???°???????±???????*/
        int x = 0, y = 0, x2 = 0, x1 = 0;
        if(number1 > number2)
        {
            x = number1;
            y = number2;
            x1 = x;
            x2  = y;
        }
        else
        {
            x = number2;
            y = number1;
            x1 = x;
            x2 = y;
            
        }
        while(x % y)
        {
            temp = (x % y);
            x = y;
            y = temp;
        }
        answer1 = y;
        /*????°???¬?????°????±???????*/
        for(i = 1;i<=x2;i++)
        {
            if((x1*i)%x2 == 0)
            {
                answer2 = (long long)(x1*i);
                break;
            }
        }
        
        answer2array[counter] = answer2;
        answer1array[counter] = answer1;
        counter++;
        }
        REP(i, counter)
    cout << answer1array[i] << " " << answer2array[i] << endl;
    return 0;
    

    }