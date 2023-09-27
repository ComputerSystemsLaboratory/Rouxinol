#include <stdio.h>

int main(){
    int inD;
    int c[27] = {0};
    int s[366][27] = {0};
    int t[366] = {0};
    long long int manzoku=0;
    int last[366] = {0};

    scanf("%d", &inD);
    for(int i=1; i<=26; ++i){
        scanf("%d", &c[i]);
    }
    
    // // Test
    // for(int i=1; i<=26; ++i){
    //     printf("%d ", c[i]);
    // }
    // printf("\n\n");

    for(int i=1; i<=inD; ++i){
        for(int j=1; j<=26; ++j){
            scanf("%d", &s[i][j]);
        }
    }
    
    // // Test
    // for(int i=1; i<=inD; ++i){
    //     for(int j=1; j<=26; ++j){
    //         printf("%d ", s[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n\n");

    // 問題B入力
    for(int i=1; i<=inD; ++i){
        scanf("%d", &t[i]);
    }

    // // Test
    // for(int i=1; i<=inD; ++i){
    //     printf("%d ", t[i]);
    // }
    // printf("\n\n");

    for(int day=1; day<=inD; ++day){
        long long int down = 0;
        last[t[day]] = day;
        for(int i=1; i<=26; ++i){
            down += c[i]*(day - last[i]);
            // printf("down %d %lld %d %d\n", day, down, c[i], last[i]);
        }

        manzoku = manzoku + s[day][t[day]] - down;
        // printf("manzoku %d %d %lld %d %lld\n", day, t[day], manzoku, s[day][t[day]], down);
        // printf("last %d %d\n", t[day], last[t[day]]);

        printf("%lld\n", manzoku);
    }

}