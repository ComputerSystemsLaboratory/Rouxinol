#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
    while(1){
        int n, m;
        scanf(" %d %d", &n, &m);
        if(n == 0 && m == 0)
            break;
        int taro[n];
        int hanako[m];
        for(int i = 0; i < n; i++)
            scanf(" %d", &taro[i]);
        for(int i = 0; i < m; i++)
            scanf(" %d", &hanako[i]);
        int mi = 1000000000;
        int t_ans, h_ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                swap(taro[i], hanako[j]);
                int t_sum = 0, h_sum = 0;
                for(int k = 0; k < n; k++)
                    t_sum += taro[k];
                for(int k = 0; k < m; k++)
                    h_sum += hanako[k];
                //printf("%d %d\n", t_sum, h_sum);
                if(h_sum == t_sum){
                    if(mi > taro[i] + hanako[j]){
                        mi = taro[i] + hanako[j];
                        t_ans = hanako[j];
                        h_ans = taro[i];
                     }
                }

                swap(taro[i], hanako[j]);
            }
        }
        if(mi != 1000000000)
            printf("%d %d\n", t_ans, h_ans);
        else
            printf("-1\n");
    }


    return 0;
}