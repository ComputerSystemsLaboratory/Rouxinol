#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int  h,w;
int ah,aw;

int main(){
    while(1){
        int s = 10000000;
        cin >> h >> w;
        if(h==0 && w==0)break;
        int dia = h*h + w*w;
        ah = aw = 150;
        for(int i = 1;i<150;i++){
            for(int j=i+1;j<=150;j++){
                int di = i*i + j*j;
                if(di == dia){
                    if(h < i){
                        if(s > di){
                            s = di;
                            ah = i;
                            aw = j;
                        }else{
                            if(i < ah){
                                ah = i;
                                aw = j;
                            }
                        }
                    }
                }
                else if(di > dia && s >= di){
                    if(s > di){
                        s = di;
                        ah = i;
                        aw = j;
                    }else{
                        if(i < ah){
                            ah = i;
                            aw = j;
                        }
                    }
                }
            }
        }
        printf("%d %d\n",ah,aw);

    }
}
