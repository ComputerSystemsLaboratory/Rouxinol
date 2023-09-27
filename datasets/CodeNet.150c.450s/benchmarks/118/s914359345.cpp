#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++){ // main loop
        int y, m, d;
        scanf(" %d %d %d", &y, &m, &d);
        int count = 0;
        // this year count
        for(int j = m + 1; j <= 10; j++){ // month
            if(y % 3 == 0){
                count += 20;
            } else{
                if(j % 2 == 0){
                    count += 19;
                } else if(j % 2 == 1){
                    count += 20;
                }
            }
         }
        int t = count;
        //printf("month: \t%d\n", count);
        // day
        if(y % 3 == 0){
            count += (20 - d + 1);
        }else{
            if(m % 2 == 0){
                count += (19 - d + 1);
            }else if(m % 2 == 1){
                count += (20 - d + 1);

            }
        }
       // printf("day: \t%d\n", count - t);
        // next year count
        for(int j = y + 1; j < 1000; j++){
            if(j % 3 == 0){
                count += (20 * 10);
            } else if (j % 3 != 0){
                count += (20 * 5 + 19 * 5);
            }

        }
        printf("%d\n", count);
    }

    return 0;
}