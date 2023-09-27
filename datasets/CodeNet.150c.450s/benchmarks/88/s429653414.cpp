#include <bits/stdc++.h>
using namespace std;

static const int INF = 1e9+7;

int main(){
    while(1){
        int h,w;
        cin>>h>>w;
        if(h == 0 && w == 0) break;
        int cmp = h*h+w*w;        
        int memo,wmemo,hmemo;
        memo = wmemo = hmemo = INF;

        for(int H=1; H<=150; H++){
            for(int W=H+1; W<=150; W++){
                int tmp = H*H+W*W;
                if(tmp > cmp || ((tmp == cmp) && (H > h))){
                    if(tmp < memo || ((tmp == memo) && (H < hmemo) )){
                        memo = tmp;
                        hmemo = H;
                        wmemo = W;
                    }
                    break;
                }
            }
        }

        cout<<hmemo<<" "<<wmemo<<endl;
    }

    return 0;
}
