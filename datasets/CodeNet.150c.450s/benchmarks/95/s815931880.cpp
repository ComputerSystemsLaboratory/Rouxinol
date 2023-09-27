#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    while( true ){

        int n;
        cin >> n;

        if(!n)
            break;

        int l = 0, r = 0, u = 0;
        int ans = 0;

        for(int i = 0; i < n; i++){

            string t;
            cin >> t;

            if( t == "lu" )
                l = 1;
            else if(t == "ru")
                r = 1;
            else if(t == "ld")
                l = 0;
            else
                r = 0;

            if(!(r^l))
                if( u^l ){
                    ans++;
                    u ^= 1;
                }

        }

        cout << ans << endl;

    }

    return 0;

}
