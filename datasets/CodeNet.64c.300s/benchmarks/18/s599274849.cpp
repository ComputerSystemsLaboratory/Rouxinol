#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x);

typedef pair<int ,int> P;

//n までの登り方の総数を返す
int solve(int n){
    if ( n <= 0) { return 1; }
    else if( n == 1 ){ return 1; }
    else if( n == 2 ){ return 2; }
    //else if( n == 3 ){ return 4; }
    return solve(n-1) + solve(n-2) + solve(n-3);
}

int main()
{
    while (true){
        int n;
        cin >> n;
        if ( n == 0) {break;}
        int sum = solve(n);
        int ret;
        if( sum % 3650  == 0){ ret = sum /3650; }
        else { ret = sum /3650 + 1; }
        cout << ret << endl;
    }
    return 0;
}