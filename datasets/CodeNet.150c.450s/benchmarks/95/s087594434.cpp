#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){

        //入力
        int n; cin >> n;
        if(!n) break;
        int ans = 0;

        char r, l;
        r = 'd';
        l = 'd';

        for(int i = 0; i < n; i++){
            string s; cin >> s;
            if(s == "lu") l = 'u';
            if(s == "ld") l = 'd';
            if(s == "rd") r = 'd';
            if(s == "ru") r = 'u';

            if(ans % 2 == 0){
                if(r == 'u' && l == 'u') ans++;    
            }else{
                if(r == 'd' && l == 'd') ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
