#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int a[4],b[4];
    while (scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF) {
        scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3]);
        int h=0,l=0;
        for (int i=0;i<4;i++) {
            for (int j=0;j<4;j++) {
                if (i!=j && a[i]==b[j]) {
                    l+=1;
                } else if (a[i]==b[j]) {
                    h+=1;
                }
            }
        }
        printf("%d %d\n",h,l);
    }
    return 0;
}