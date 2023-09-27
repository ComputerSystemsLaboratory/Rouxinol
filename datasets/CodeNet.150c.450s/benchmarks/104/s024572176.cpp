#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long lon
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main (void){
    
    int tate,bnumber;
    int bridge[31][2] = {0};
    int answer[31] = {0};
    bool roopjudge = true;
    int temp = 0;
    int tempnumber = 0;
    int i,j,k,l;
    
    cin >> tate >> bnumber;
    for(i = 0;i< bnumber;i++)
        scanf("%d%*c%d",&bridge[i][0],&bridge[i][1]);
    /*
    REP(i, bnumber)
    cout << bridge[i][0] << ","<< bridge[i][1] << endl;
    */
    
    for(i = 1; i<=tate; i++)
    {
        temp = i;
        for(k = 0; k<bnumber;k++)
        {
            if(temp == bridge[k][0])
                temp = bridge[k][1];
            else if(temp == bridge[k][1])
                temp = bridge[k][0];
        }
        answer[temp] = i;
    }
    
    REP(i,tate)
    cout << answer[i+1] << endl;
    return 0;
    
}