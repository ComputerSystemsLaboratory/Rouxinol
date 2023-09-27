#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int e;

    while(cin>>e,e){
        int res=10000000;
        for(int z=100;z>=0;z--){
                for(int y=1000;y>=0;y--){
                    int x=e-z*z*z-y*y;

                    if(x>=0){
                        res=min(res,x+y+z);
                    }
                }
        }

        cout << res << endl;
    }
}