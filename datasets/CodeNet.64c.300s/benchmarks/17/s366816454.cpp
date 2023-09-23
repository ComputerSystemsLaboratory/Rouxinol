#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,s;
    while(scanf("%d %d %d",&x,&y,&s),x) {
        int ans=0;
        for(int i=1;i<s;i++) {
            for(int j=i;j<s;j++) {
                int sum=i*(100+x)/100+j*(100+x)/100;
                if(sum!=s) continue;
                ans=max(ans,i*(100+y)/100+j*(100+y)/100);
            }
        }
        printf("%d\n",ans);
    }
}