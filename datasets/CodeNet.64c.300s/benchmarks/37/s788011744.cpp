#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    while(scanf("%d",&N),N) {
        int ans=0;
        for(int i=1;i<N;i++) {
            int sum=i;
            for(int j=i+1;sum<N;j++) sum+=j;
            if(sum==N) ans++;
        }
        printf("%d\n",ans);
    }
}