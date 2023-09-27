#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{

    while(1){
        int h, w;
        scanf(" %d %d", &h, &w);
        if(h == 0 && w == 0)
            break;
        const int k = h * h + w * w;
        bool ch = false;
        bool ch1 = true;
        int ansh = 1000000000, answ = 1000000000;
        int min_taikaku = 1000000000;
        for(int i = 1; i <= 150; i++){
            for(int j = i + 1; j <= 150; j++){
                if(i == h & j == w)
                    continue;
                int taikaku = i * i  + j * j;
                if(k < taikaku && taikaku < min_taikaku && !ch){
                    //printf("%d %d %d %d %d \n", k, min_taikaku, taikaku, i , j);
                    min_taikaku = taikaku;
                    ansh = i;
                    answ = j;
                } else if(taikaku == k && h < i){
                    ch = true;
                    if(ch1){
                        ansh = 100000000;
                        ch1 = false;
                    }
                    //printf("%d %d %d %d %d \n", k, min_taikaku, taikaku, i , j);
                    if(h < i && i <= ansh){
                        min_taikaku = k;
                        ansh = i;
                        answ = j;
                    }
                }
            }
        }
        printf("%d %d\n", ansh, answ);
    }

    return 0;
}