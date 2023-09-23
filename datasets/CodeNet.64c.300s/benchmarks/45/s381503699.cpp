#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,m,x;
    double p;
    while (cin>>n>>m>>p) {
        if (n==0&&m==0&&p==0) {
            break;
        } else {
            int sum=0;
            int tmp;
            for (int i=1;i<=n;i++) {
                cin>>x;
                if (i==m) {
                    tmp=x;
                }
                sum+=x;
            }
            sum=sum*100;
            double hoge=p/100;
            sum=sum-sum*hoge;
            if (tmp==0) {
                cout<<0<<endl;
            } else {
                int ans=float(sum/tmp);
                cout<<ans<<endl;
            }
        }
    }
}

