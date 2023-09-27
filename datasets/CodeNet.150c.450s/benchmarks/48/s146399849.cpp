#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(true){
        int e;
        int f;
        int ans=1000000;
        cin >> e;
        if(!e) break;
        for(int i=0;i<=100;++i){
            f = e - i*i*i;
            if(f < 0) break;
            for(int j=0;j<=1000;++j){
                if(j*j > f){
                    ans = min(ans, f-(j-1)*(j-1)+j-1+i);
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}