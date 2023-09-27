#include <bits/stdc++.h>
using namespace std;
int calc(int y,int m,int d) {
    int uruu=(y-1)/3;
    int days=uruu*200+(y-1-uruu)*195;
    if(y%3) {
        int small=(m-1)/2;
        days+=small*19+(m-1-small)*20;
    }else {
        days+=(m-1)*20;
    }
    days+=d-1;
    return days;
}
int main() {
    int poyo=calc(1000,1,1);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int y,m,d;
        scanf("%d %d %d",&y,&m,&d);
        printf("%d\n",poyo-calc(y,m,d));
    }
}