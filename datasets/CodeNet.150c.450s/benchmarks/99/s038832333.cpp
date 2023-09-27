#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define len(v) (int)(v).size()

using namespace std;

int main()
{
    int n;
    cin >> n;
    rep(t,n){
        string s[2];
        cin >> s[0] >> s[1];
        int a[2] = {};
        rep(i,2){
            rep(j,len(s[i])){
                int ad = 1;
                if(isdigit(s[i][j])){
                    ad = (int)(s[i][j] - '0');
                    j++;
                }
                if(s[i][j] == 'm'){
                    a[i] += ad*1000;
                }else if(s[i][j] == 'c'){
                    a[i] += ad*100;
                }else if(s[i][j] == 'x'){
                    a[i] += ad*10;
                }else{
                    a[i] += ad;
                }
            }
        }
        int res = a[0]+a[1];
        if(res / 1000){
            int val = res / 1000;
            res -= val*1000;
            if(val > 1){
                cout << (char)('0'+val);
            }
            cout << 'm';
        }
        if(res / 100){
            int val = res / 100;
            res -= val*100;
            if(val > 1){
                cout << (char)('0'+val);
            }
            cout << 'c';
        }
        if(res / 10){
            int val = res / 10;
            res -= val*10;
            if(val > 1){
                cout << (char)('0'+val);
            }
            cout << 'x';
        }
        if(res > 0){
            if(res > 1){
                cout << (char)('0'+res);
            }
            cout << 'i';
        }
        cout << "\n";
    }
}

