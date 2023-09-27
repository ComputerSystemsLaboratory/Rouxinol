#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    for(;;){
        int x,  y, s;
        scanf(" %d %d %d", &x, &y, &s);
        if(x == 0 && y == 0 && s == 0)
            break;

        // ??????????????§?????????
        int ma = 0;
        for(int i = 1; i < 1000; i++){
            for(int j = 1; j < 1000; j++){
                int pbi = i * (100+x) / 100;
                int pbj = j * (100+x) / 100;
                if(pbi + pbj == s){
                    int pai = i * (100+y) / 100;
                    int paj = j * (100+y) / 100;
                    ma = max(ma, pai + paj);
                }
            }
        }
        printf("%d\n", ma);
    }

    return 0;
}