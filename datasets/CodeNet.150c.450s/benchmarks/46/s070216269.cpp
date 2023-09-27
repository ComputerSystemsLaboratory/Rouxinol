#include <iostream>

using namespace std;

int getWays(int n, int x)
{
    int ways = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = i + 1; j <= n; ++j){
            for(int k = j + 1; k <= n; ++k){
                if(i + j + k == x) ++ways;
            }
        }
    }
    return ways;
}
int main()
{
    int n, x;
    while(1){
        int n, x;
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        int ways = getWays(n, x);
        cout << ways << endl;
    }
    return 0;
}