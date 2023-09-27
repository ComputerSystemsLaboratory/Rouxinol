#include <bits/stdc++.h>

using namespace std;

int n[1000]={};
long long a[1000][1000]={};
long long ans = 10000000000;

int main(){
    int s=0;
    while(1){
        scanf("%d",&n[s]);
        if(n[s] == 0){
            break;
        }
        for(int i=0;i<n[s];i++){
           scanf("%lld",&a[s][i]); 
        }
        s++;
    }

    int times =s;
    int sub;
    for(int i=0;i<s;i++){
        sort(a[i],a[i]+n[i]);
        for(int j=0;j<n[i]-1;j++){
            sub = abs(a[i][j] - a[i][j+1]);
            if(ans >= sub){
                ans = sub;
            }
        }
        cout << ans << endl;
        ans = 1000000000;
    }
    

    return 0;
}
