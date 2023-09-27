#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int x,y,s;
        cin >> x >> y >> s;
        if(x==0) break;

        int ans=0;
        for(int i=1; i<s; i++){
            int xa = (double)i*(100+x)/100;
            if(s-xa<=0) break;
            int mb = (double)(s-xa)*100/(100+x);//lower bound of no tax
            while(1){
                int xb = (double)mb*(100+x)/100;
                if(xa+xb>s) break;
                if(xa+xb==s){
                    int tmp = (int)((double)i*(100+y)/100)
                        + (int)((double)mb*(100+y)/100);
                    ans = max(ans, tmp);
                }
                mb++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}