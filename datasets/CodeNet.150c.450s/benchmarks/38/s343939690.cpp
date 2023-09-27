#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    while(n--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        bool tf=false;
        for(int b=0; b<3; b++){
            for(int c=0; c<3; c++){
                if(b==c) continue;
                for(int d=0; d<3; d++){
                    if(b==d || c==d) continue;
                    if((a[b]*a[b]+a[c]*a[c])==a[d]*a[d]) tf=true;
                }
            }
        }
        cout << (tf? "YES":"NO") << "\n";
    }
}

