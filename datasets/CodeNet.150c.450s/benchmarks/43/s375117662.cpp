#include<iostream>
using namespace std;

int main(){
    int cnt[2];
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        cnt[0] = 0;
        cnt[1] = 0;
        for(int i = 0; i < n; i++){
            int a,b;
            cin >> a >> b;
            if(a > b){
                cnt[0] += a + b;
            }else if(a < b){
                cnt[1] += a + b;
            }else{
                cnt[0] += a;
                cnt[1] += b;
            }
        }
        cout << cnt[0] << " " << cnt[1] << endl;
    }
    return 0;
}