#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>
#include <stack>
#include <tuple>

#define ll long long int

using namespace std;

const int INF = (1<<30) - 1;

int tax(int a, int p){
    return a*(100+p)/100;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int x, y, s;
    while(cin>>x>>y>>s, x|y|s){
        int ans = 0;
        for(int i=1; i<1000; i++){
            for(int j=1; j<1000; j++){
                if(tax(i, x)+tax(j, x) == s){
                    ans = max(ans, tax(i, y)+tax(j, y));
                }
            }
        }
        cout << ans << endl;
    }
        
    return 0;
}