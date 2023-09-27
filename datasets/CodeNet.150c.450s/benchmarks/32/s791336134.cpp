#include <iostream>
using namespace std;
int main() {
    int m, n_min, n_max;
    while(cin>>m>>n_min>>n_max){
        if(m==0&&n_min==0&&n_max==0)break;

        int p[m+2];
        for(int i=1; i<=m; i++)cin>>p[i];

        int gap=-1,ans;
        for(int i=n_min; i<=n_max; i++){
            if(gap<=p[i]-p[i+1]){
                gap=p[i]-p[i+1];
                ans=i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

