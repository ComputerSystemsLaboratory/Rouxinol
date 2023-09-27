#include <iostream>

using namespace std;

int main(){
    int n, i, a, b, asum, bsum;
    while(cin >> n){
        if(n == 0){
            break;
        }
        asum = 0;
        bsum = 0;
        for(i = 0; i < n; ++i){
            cin >> a >> b;
            if(a > b){
                asum += a + b;
            }else if(a < b){
                bsum += a + b;
            }else{
                asum += a;
                bsum += b;
            }
        }
        cout << asum << " " << bsum << endl;
    }
}