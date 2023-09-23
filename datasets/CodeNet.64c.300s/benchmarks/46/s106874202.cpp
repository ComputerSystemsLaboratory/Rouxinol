#include <iostream>
using namespace std;
int main(void){
    for(;;){
        int a,d,n;
        cin >> a >> d >> n;
        if(a == 0 && d == 0 && n == 0){ return 0; }
        int ans = -1;
        for(int i = 0 ; ((a + d * i <= 1000000) && (ans == -1)) ; i++ ){
            bool prime = true;
            if(a + d * i == 1) { prime = false; }
            else{
                for(int j = 2 ; j*j <= a + d * i ; j++){
                    if((a + d * i) % j == 0){ prime = false; }
                }
            }
            if(prime){
                if(n == 1){ ans = a + d * i; }else{ n--; }
            }
        }
        cout << ans << endl;
    }
}
