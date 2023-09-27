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
    
    int array[5] = {0};
    int size = sizeof(array) /sizeof(int);
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
    sort(array, array+size);
    RFOR(i, 4, -1) { cout << array[i]; if(i != 0) cout << " "; else cout << endl;}
    return 0;

}