#include <iostream>
using namespace std;
int main(void){
    int n;
    while(cin >> n){
        if(n == 0)  break;
        int cnt = 0;
        int x, y;
        for(int i = 2; (n/i) - (i/2) >= 0; i++){
            x = n / i; 
            y = x;
            if(i % 2 == 0){
                for(int j = 0; j < (i/2); j++){
                    x++;
                    y += x;
                }
                x = n / i;
                for(int j = 1; j < (i/2); j++){
                    x--;
                    y += x;
                }
            }
            else{
                if(x - (i/2) <= 0)  continue;
                for(int j = 0; j < (i/2); j++){
                    x++;
                    y += x;
                }
                x = n / i;
                for(int j = 0; j < (i/2); j++){
                    x--;
                    y += x;
                }
            }
            if(y == n)  cnt++;
        }
        cout << cnt << endl;
        
        
    }
    return 0;
}

