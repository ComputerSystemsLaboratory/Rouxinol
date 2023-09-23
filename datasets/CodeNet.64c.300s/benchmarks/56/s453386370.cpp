#include <iostream>
using namespace std;

#define NORMAL 195;
#define URU 200;

int main(){
    int n, y, m, d;
    int uru, small;
    int days;
    cin >> n;
    for(int i=0;i<n;++i){
        days = 0;
        cin >> y >> m >> d;
        uru = 999/3 - y/3;
        days += uru * URU;
        days += (999-y-uru) * NORMAL;
        if(y % 3){
            small = 10/2 - m/2;
            days += small * 19;
            days += (10-m-small) * 20;
            if(m % 2){
                days += 20-d;
            }else{
                days += 19-d;
            }
        }else{
            days += (10-m) * 20;
            days += 20-d;
        }
        cout << days+1 << endl;
    }
}