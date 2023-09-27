#include<iostream>
using namespace std;

int main(){
    while(1){
        int m, nmin, nmax;
        cin >> m >> nmin >> nmax;
        if(m == 0 && nmin == 0 && nmax == 0)break;

        int p[100002];  // 1-origin
        for(int i = 1; i <= m; i++){
            cin >> p[i];
        }

        int gap = 0, ans;
        for(int i = nmin; i <= nmax; i++){
            if(p[i] - p[i + 1] >= gap){
                gap = p[i] - p[i + 1];
                ans = i;
            }
        }

        cout << ans << endl;
        //cout << gap << endl;
    }





    return 0;
}