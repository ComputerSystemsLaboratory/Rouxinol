#define REP(i,n) for (int i=1;i<(n);i++)
#include <iostream>
using namespace std;

int tax(int p,int x){
        int ans = (p*(100+x))/100;
        return ans;
}

int main(){
        int x, y, s;
        cin >> x;
        while(x > 0){
                int ans = 0;
                cin >> y >> s;
                REP(i,s){
                REP(j,s){
                        if(tax(i,x)+tax(j,x) == s){
                                if (tax(i,y)+tax(j,y) > ans)
                                        ans = tax(i,y)+tax(j,y);
                        }
                }
                }
                cout << ans << endl;
                cin >> x;
        }
}