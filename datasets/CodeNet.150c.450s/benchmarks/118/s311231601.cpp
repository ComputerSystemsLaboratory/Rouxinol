#include <iostream>
using namespace std;
int main(){
    int y, m, d, i, times, D1, D2, D3;
    cin >> times;
    i = 0;
    while(1){i++;
        if(i>times){break;}
        cin >> y >> m >> d;
        D1 = (y-1)/3*200+((y-1)-(y-1)/3)*195;
        if(y%3==0){
            D2 = (m-1)*20+d;
        }
        else{
            D2 = (m-1)*20-(m-1)/2+d;
        }
        D3 = 196471 - D1 - D2;
        cout << D3 << endl;
    }
    
    return 0;

}