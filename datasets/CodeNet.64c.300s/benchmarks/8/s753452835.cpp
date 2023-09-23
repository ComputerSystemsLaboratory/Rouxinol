#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for (int i=3;i<=n;i++) {
        int x=i;
        if (i%3==0 || i%10==3) {
            printf(" %d",i);
        } else {
            while (x>0) {
                if (x%10==3) {
                    printf(" %d",i);
                    break;
                }
                x/=10;
            }
        }
    }
    printf("\n");
    return 0;
}

