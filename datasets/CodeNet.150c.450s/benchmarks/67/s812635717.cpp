#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

bool solve(int n, int i);

int main()
{
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        int ans = 0;
        for(int i = 2; i <= n / 2 + 1; i++){
            if(solve(n, i)) ans++;
        }
        cout << ans << endl;
    }
   return 0;
}

bool solve(int n, int i)
{
    int a = n / i;
    for(int j = a - (i / 2) - 1; j < a + 1; j++){
        int sum = 0;
        if(j <= 0) continue;
        for(int k = 0; k < i; k++){
            sum += j + k;
        }
        if(sum == n){
            return true;
        }
    }
    return false;  
}