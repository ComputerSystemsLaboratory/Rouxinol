#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int map[2000][2000];

int main(void) {
    int q;
    scanf("%d",&q);
    for(int i=0; i<q; i++) {
        memset(map, 0, sizeof(map));
        char x[2000], y[2000];
        scanf("%s%s",x,y);
        int xl=strlen(x),yl=strlen(y);

        for(int m=0; m<xl; m++)
            map[m][0] = 0;
        for(int n=0; n<yl; n++)
            map[0][n] = 0;
        for(int m=1; m<=xl; m++)
            for(int n=1; n<=yl; n++) {
                if(x[m-1] == y[n-1])
                    map[m][n] = max(max(map[m-1][n-1]+1, map[m-1][n]), map[m][n-1]);
                else
                    map[m][n] = max(max(map[m-1][n-1]+0, map[m-1][n]), map[m][n-1]);
            }
        printf("%d\n", map[xl][yl]);
    }
    return 0;
}