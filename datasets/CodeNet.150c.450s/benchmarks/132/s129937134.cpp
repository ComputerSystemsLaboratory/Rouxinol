#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,p;
    while(scanf("%d %d",&n,&p),n!=0) {
        int wan=p;
        int idx=0,stone[50]={0};
        while(1) {
            if(wan>0) {
                stone[idx]++;
                wan--;
                if(stone[idx]==p) break;
            }else {
                wan=stone[idx];
                stone[idx]=0;
            }
            idx=(idx+1)%n;
        }
        printf("%d\n",idx);
    }
}