#include <bits/stdc++.h>
using namespace std;

int main() {
    
    while (1) {
        int a[15][6]{};
        int h;
        cin >> h;
        if (h == 0) break;
        for (int i = h-1; i >= 0; i--) {
            for (int j = 0; j < 5; j++) cin >> a[i][j];
        }
        int ans = 0, t = 1;
        while (1) {
            bool flag = false;
            for (int i = 0; i < h; i++) {
                t = 1;
                for (int j = 0; j < 5; j++) {
                    if (a[i][j] == a[i][j + 1])
                        t++;
                    else {
                        if (t >= 3) {
                            flag = true;
                            for (int k = 0; k < t; k++) {
                                ans += a[i][j - k];
                                a[i][j - k] = 0;
                            }
                            
                        }
                        t = 1;
                    }
                    if(a[i][j]==0)t=1;
                }
            }
            if(!flag)break;
            for(int i=0;i<h;i++){
                for(int j=0;j<5;j++){
                    if(a[i][j]==0){
                        int k = i+1;
                        while(1){
                            if(k>h || a[k][j]>0){
                                a[i][j] = a[k][j];
                                a[k][j] = 0;
                                break;
                            }
                            k++;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

