#include <bits/stdc++.h>
using namespace std;
bool gt(int h1,int w1,int h2,int w2) {
    return h1*h1+w1*w1>h2*h2+w2*w2||(h1*h1+w1*w1==h2*h2+w2*w2&&h1>h2);
}
int main() {
    int h,w;
    while(scanf("%d %d",&h,&w),h) {
        int ans_h=514,ans_w=514;
        for(int H=1;H<=150;H++) {
            for(int W=H+1;W<=150;W++) {
                if(gt(H,W,h,w)&&gt(ans_h,ans_w,H,W)) {
                    ans_h=H,ans_w=W;
                }
            }
        }
        printf("%d %d\n",ans_h,ans_w);
    }
}