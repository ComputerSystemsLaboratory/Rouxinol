#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctime>


#ifndef _USEFUL_MACROS_
#define _USEFUL_MACROS_
#define INF 99999999
#define N_PRIME 1000000007
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define OUTPUT_DEBUG
#ifdef OUTPUT_DEBUG
#define debug(x) cout<<#x<<": "<<x<<endl
#else
#define debug(x) do{}while(false)
#endif
#endif 

using namespace std;

int main(void){
    int n;
    int m = 40000;
    cin >> n;
    vector<bool> table(m);
    vector<int> primes;
    
    REP(i,m)table[i]=true;
    table[0] = false;
    table[1] = false;
    
    FOR(i,2,m){
        if( table[i] ){
            primes.push_back(i);
            for(int j = 0 ; j < m ; j += i )
                table[j] = false;
        }
    }
    
    
    cout << n << ":";
    REP(i,primes.size()){
        int p = primes[i];
        while( n % p == 0 ){
            cout << " " << p;
            n/=p;
        }
    }
    
    if( n != 1 ){
        cout <<" " << n;
    }
    cout << endl;
    
    return 0;
}