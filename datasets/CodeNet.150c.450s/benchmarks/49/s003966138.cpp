#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(scanf("%d",&n),n!=0) {
        int sum=0,max_s=0,min_s=1000;
        for(int i=0;i<n;i++) {
            int s;
            scanf("%d",&s);
            max_s=max(max_s,s);
            min_s=min(min_s,s);
            sum+=s;
        }
        printf("%d\n",(sum-max_s-min_s)/(n-2));
    }
}