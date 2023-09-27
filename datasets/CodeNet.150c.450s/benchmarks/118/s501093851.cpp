#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int max = 999 * 5 * 19 + 999 * 5 * 20 +  999 / 3 * 5 + 1;
    int y, m, d;
    for(int i = 0; i < n; i++){
        cin >> y >> m >> d;
        y--;
        m--;
        int x;
        x = y * 5 * 19 + y * 5 * 20 + y / 3 * 5;
        if((y+1) % 3 == 0){
            x = x + m*20 + d;
        }
        else{
            x = x + m * 19 + (m + 1) /2 + d;
        }
        cout << max - x << endl;
    }
   return 0;
}

