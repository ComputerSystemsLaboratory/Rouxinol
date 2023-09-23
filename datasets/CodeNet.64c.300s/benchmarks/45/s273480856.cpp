#include<iostream>
using namespace std;

int main(){
    int n, m, p;
    int a, sum, tmp, ans;
    
    while(1){
        cin >> n >> m >> p;
        sum=0;
        if(n+m+p==0) break;
        for(int i=1; i<=n; i++){
            cin >> a;
            sum+=a;
            if(i==m) tmp=a;
        }
        if(tmp==0) ans = 0;
        else ans = sum * (100-p) / tmp;
        cout << ans << endl;
    }
    return 0;
}