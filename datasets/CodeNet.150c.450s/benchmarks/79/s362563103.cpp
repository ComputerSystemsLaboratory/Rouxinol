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
#define COUNTER int i= 0,j = 0,k = 0,l = 0,m = 0, n= 0;
#define RETURN cout << endl;

using namespace std;

int main (void){
    
    COUNTER
    int number;
    int r;
    
    while(cin >> number >> r ,number+r)
    {
        int p,c;
        
        vector<int>d(51,0);
        for(int i = 0; i<= number;i++){d[i] = number-i;}
        for(int i = 0; i< r;i++)
        {
            cin >> p >> c;
            vector<int>temp(51,0);
            for(int i = p-1; i< p-1+c;i++)
            {
                temp[i] = d[i];
               // cout << temp[i] << endl;
            }
            for(int l = 0; l < c;l++)
            {
                //cout << d[p-1];
                d.erase(d.begin()+p-1);
                
            }
            d.insert(d.begin(),temp.begin()+p-1,temp.begin()+c+p-1);
            /*REP(i,number)
            cout << d[i] << " ";*/
        }
        cout << d[0] << endl;
        
    }

    return 0;
}