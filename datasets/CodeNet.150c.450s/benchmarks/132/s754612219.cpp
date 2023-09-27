#include <cstdio>
#include <algorithm>
#include <iostream>
// 18:45 -
using namespace std;

int main(void)
{
    while(1){
        int n, p;
        scanf("%d %d", &n, &p);
        if(n == 0 & p == 0)
            break;
        int mine[n];
        for(int i = 0; i < n; i++) mine[i] = 0;
        int all = 0;
        int count = 0;
        while(1){
            all = 0;
            if(p > 0){
                p--;
                mine[count % n]++;
                for(int i = 0; i < n; i++) all += mine[i];
                all -= mine[count % n];
                if(all == 0 && p == 0){
                    break;
                }
            } else if(p == 0){
                p += mine[count % n];
                mine[count % n] = 0;
            }
            count++;
        }
        printf("%d\n", count % n);
    }

    return 0;
}