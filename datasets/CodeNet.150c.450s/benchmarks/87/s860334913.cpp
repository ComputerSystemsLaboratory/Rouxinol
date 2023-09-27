#include <iostream>
using namespace std;

int main() {
    while(true){
        int h;cin >> h;
        if(h == 0) break;
        int c[15][5];
        for(int i=h-1;i>=0;i--){
            for(int j=0;j<5;j++){
                cin >> c[i][j];
            }
        }

        int ans = 0;
        while(true){
            // erase
            // cout << "hoge" << endl;
            bool flag = false;
            for(int i=0;i<h;i++){
                int bb = c[i][0];
                int l = 0, r = 1;
                // int cc = c[i][0];
                for(int j=1;j<5;j++){
                    if(c[i][j] == bb && c[i][j] != 0){
                        // cc = c[i][j];
                        r++;
                    }else{
                        if(j >= 3){
                            break;
                        }
                        l = j;
                        r = j+1;
                        // cc = c[i][j];
                        bb = c[i][j];
                    }
                }
                // cout << count << "count" << endl;
                if(r-l >= 3){
                    flag = true;
                    for(int j=l;j<r;j++){
                        ans += c[i][j];
                        c[i][j] = 0;
                    }
                }
            }

            // cout << "before" << endl;
            // for(int i=0;i<h;i++){
            //     for(int j=0;j<5;j++){
            //         cout << c[i][j];
            //     }
            //     cout << endl;
            // }
            // fall
            for(int j=0;j<5;j++){
                int i=0;
                for(int k=0;k<h;k++){
                    if(c[k][j] != 0){
                        c[i][j] = c[k][j];
                        i++;
                    }
                }
                for(int k=i;k<h;k++){
                    c[k][j] = 0;
                }
            }
            // cout << "after" << endl;
            // for(int i=0;i<h;i++){
            //     for(int j=0;j<5;j++){
            //         cout << c[i][j];
            //     }
            //     cout << endl;
            // }
            // cout << endl;
            if(!flag) break;
        }
        cout << ans << endl;
    }
    return 0;
}