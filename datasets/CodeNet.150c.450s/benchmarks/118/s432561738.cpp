#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    int n, dys;
    cin >> n;

    for(int i=0; i < n; i++){
        dys = 0;
        int y, m, d;
        cin >> y >> m >> d;

        if(y % 3 == 0) dys += (20 - d);
        else if(m % 2 == 1) dys += (20 - d);
        else if(m % 2 == 0) dys += (19 - d);
        if(m+1 == 11){
            y += 1;
            m = 1;
        }
        else m++;

        for(int j = y; j < 1000; j++){
            int month;
            if(j == y) month = m;
            else month = 1;
            while(month <= 10){
                if(j % 3 == 0) dys += 20;
                else if(month % 2 == 0) dys += 19;
                else if(month % 2 == 1) dys += 20;
                month++;
            }
        }

        cout << dys + 1 << endl;
    }

    return 0;
}

