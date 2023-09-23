#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main()
{
    int cri = 0;
    for(int j=1;j<1000;j++){
        if(j%3){
            cri += 195;
        }else{
            cri += 200;
        }
    }
    cri++;
    int n;
    cin >> n;
    rep(i,n){
        int y,m,d;
        cin >> y >> m >> d;
        int res = 0;
        for(int j=1;j<y;j++){
            if(j%3){
                res += 195;
            }else{
                res += 200;
            }
        }
        for(int j=1;j<m;j++){
            if(y%3){
                if(j%2){
                    res += 20;
                }else{
                    res += 19;
                }
            }else{
                res += 20;
            }
        }
        res += d;
        cout << cri-res << "\n";
    }
}

