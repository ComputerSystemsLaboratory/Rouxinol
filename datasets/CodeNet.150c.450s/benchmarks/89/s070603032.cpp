#include <iostream>
using namespace std;

int main(){
    int prime[1000000];
    for(int i=2;i<1000000;++i){
        prime[i] = 1;
    }
    for(int i=2;i<1000000;++i){
        if(prime[i]){
            for(int j=2;j*i<1000000;++j){
                prime[i*j]=0;
            }
        }
    }
    while(true){
        int a, d, n;
        int cnt=0;
        int ans;
        cin >> a >> d >> n;
        if(!(a||d||n)) break;
        for(int i=0;a+i*d<1000000;++i){
            if(prime[a+i*d]){
                ++cnt;
                if(cnt == n){
                    ans = a+i*d;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}