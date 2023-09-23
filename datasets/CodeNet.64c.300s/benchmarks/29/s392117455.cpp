    #include <bits/stdc++.h>
    #define REP(i,n) for(int i = 0; i < (int)(n); ++i)
    using namespace std;

    int main(){
        int x = 0, y = 0, z = 0;
        int m = 1000000, e = 0;
        while(cin >> e && e > 0){
            z = 0;
            while(z*z*z <= e){
                z++;}
            z--;
            REP(i,z+1){
                y = 0;
                while(y*y <= e-i*i*i){
                    y++;
                }
                y--;
                x = e - y*y - i*i*i;
                m = min(x+y+i,m);
            }
            cout << m << endl;
            m = 1000000;
        }
        return 0;
    }