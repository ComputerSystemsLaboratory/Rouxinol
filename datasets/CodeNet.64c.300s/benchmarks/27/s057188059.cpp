#include <iostream>
using namespace std;
int main(void){
    int n, x, i, j, k, count = 0;

    for(;;){
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        for(i = 1; i <= n; i++){
            for(j = i + 1; j <= n; j++){
                for(k = j + 1; k <= n; k++){
                    if(i + j + k == x) count++;
                }
            }
        }
        cout << count << endl;
        count = 0;
    }
}
