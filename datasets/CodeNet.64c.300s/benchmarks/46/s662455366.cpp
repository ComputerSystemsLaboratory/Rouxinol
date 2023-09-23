#include<iostream>
using namespace std;
int main(void)
{
    bool prime[1000005];
    for(int i = 0 ; i < 1000005 ; i++){ prime[i] = true; }
    prime[0] = false; prime[1] = false;
    for(int k = 2 ; k < 1000005 ; k++){
        if(prime[k] == true){
            for(int j = 2 ; j*k < 1000005 ; j++){
                prime[j*k] = false;
            }
        }
    }
    for(;;){
        int a, d, n;
        cin >> a >> d >> n;
        if(a == 0 && d == 0 && n == 0){
            return 0;
        }
        int ans; 
        bool finish=false;
        for(int i = 0 ; (a+d*i <= 1000000) && (!finish) ; i++){
            if(prime[a+d*i]){
                if(n == 1){
                    ans    = a+d*i;
                    finish = true;
                }else{
                    n--;
                }
            }
        }
        cout << ans << endl;
    }
}
