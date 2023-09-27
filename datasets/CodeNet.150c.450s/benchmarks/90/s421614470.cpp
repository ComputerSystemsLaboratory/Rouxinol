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

/*thief??????*/

int main(void){
    
    int input[120] = {0};
    int c  = 1;
    int check[101] = {0};
    int asnwer[101] = {0};
    int max = 0;
    while(cin >> input[c])
    {
        int temp = input[c];
        check[temp]++;
        c++;
    }
    REP(i, 101)
        if(max <= check[i])
            max = check[i];
    
    REP(i,101) if(check[i] == max) cout << i << endl;
    return 0;
        }