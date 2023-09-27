#include <stdio.h>

int n;

int main() {
    while(true) {
        scanf("%d",&n);
        if(n<=0) break;
        int ans = 0;
        bool up = true;
        int l=0,r=0;
        for(int i = 0; i < n; i++) {
            char act[4];
            scanf("%s",&act);
            bool isl = act[0]=='l';
            bool isu = act[1]=='u';
            if(isl) l+=(isu^up)?-1:1;
            else r+=(isu^up)?-1:1;
            if(l+r==2) {
                ans += 1;
                l=0; r=0;
                up=!up;
            }
            //printf("%3d%3d%3d\n",l,r,ans);
        }
        //ans += l+r;
        printf("%d\n",ans);
    }
}
