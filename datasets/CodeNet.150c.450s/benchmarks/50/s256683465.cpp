#include <cstdio>
using namespace std;

int main(void)
{
    int ans;
    int change;
    int money;
    
    while (1){
        scanf("%d", &money);
        if (money == 0) break;
        
        ans = 0;
        change = 1000 - money;
        while (change != 0){
            if (500 <= change){
                change -= 500;
                ans++;
                continue;
            }
            if (100 <= change){
                change -= 100;
                ans++;
                continue;
            }
            if (50 <= change){
                change -= 50;
                ans++;
                continue;
            }
            if (10 <= change){
                change -= 10;
                ans++;
                continue;
            }
            if (5 <= change){
                change -= 5;
                ans++;
                continue;
            }
            if (1 <= change){
                change -= 1;
                ans++;
                continue;
            }
        }
        printf("%d\n", ans);
    }
    
    return (0);
}