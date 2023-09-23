#include <iostream>
#include<algorithm>
using namespace std;

int max(int m,int n){
    if (m>n) {
        return m;
    }else{
        return n;
    }
}

int tax(int i,int j,int x){
    double a = (i*(100+x))/100;
    double b = (j*(100+x))/100;
    int aa = static_cast<int>(a);
    int bb = static_cast<int>(b);
    return aa+bb;
}

int main() {
    for (;;) {
        int x,y,s;
        int ans=0;
        cin>>x>>y>>s;
        if (x==0&&y==0&&s==0) {
            break;
        }
        for(int i=1;i<=s-1;i++){
            for (int j=1; j<=i; j++) {
                int hoge = tax(i, j, x);
                if(hoge==s){
                    ans=max(ans,tax(i,j,y));
                }
            }
        }
        cout << ans << "\n";
    }
}