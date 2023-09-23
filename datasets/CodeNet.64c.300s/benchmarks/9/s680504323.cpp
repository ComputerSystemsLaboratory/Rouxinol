#include <iostream>
using namespace std;

int main(void){
    int i, week;
    int ans = 100000;
    cin >> week;
    for(i = 0; i < week; i++){
        ans = ans * 1.05;
        if(ans % 1000 != 0)ans = ans + (1000 - ans % 1000);
    }
    cout << ans << endl;
}