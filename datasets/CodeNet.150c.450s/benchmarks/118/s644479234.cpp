#include <bits/stdc++.h>
using namespace std;

int days(int y, int m, int d){
    --y; --m; --d;
    int ret = 195 * y + y / 3 * 5 + m * 19 + (m+1) / 2 + d;
    if(y%3 == 2){
        ret += m / 2;
    }
    return ret;
}

int main(){
    int N;
    for(scanf("%d", &N); N--;){
        int y, m, d;
        scanf("%d%d%d", &y, &m, &d);
        printf("%d\n", days(1000, 1, 1) - days(y, m, d));
    }
    return 0;
}