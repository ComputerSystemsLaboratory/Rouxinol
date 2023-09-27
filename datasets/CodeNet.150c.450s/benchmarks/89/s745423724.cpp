#include <iostream>
#include <map>

using namespace std;

#define loop(i,a,b) for(int i=(a); i<(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int M = 1100*1000;
    bool isp[M];
    rep(i,M) isp[i] = true;
    isp[0] = isp[1] = false;
    for(int i=2;i*i<M;i++){
        if(!isp[i]) continue;
        for(int j=i*i; j<M;j+=i) isp[j] = false;
    }
    int a,d,n;
    while(cin >> a >> d >> n && a){
        int c = 0;
        int ans = -1;
        for(int i=a;i<M;i+=d){
            if(isp[i]){
                c++;
                if(c == n){
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}