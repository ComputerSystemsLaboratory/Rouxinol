#include <bits/stdc++.h>
using namespace std;
int tarou[101],hanako[101];
int main() {
    int n,m;
    while(scanf("%d %d",&n,&m),n) {
        memset(tarou,0,sizeof(tarou));
        memset(hanako,0,sizeof(hanako));
        int s;
        int t_sum=0,h_sum=0;
        for(int i=0;i<n;i++) {scanf("%d",&s);tarou[s]++;t_sum+=s;}
        for(int i=0;i<m;i++) {scanf("%d",&s);hanako[s]++;h_sum+=s;}
         if(abs(t_sum-h_sum)%2) {printf("-1\n");continue;}
         int d=(t_sum-h_sum)/2;
         bool OK=0;
         for(int i=0;i<=100;i++) {
            int j=i-d;
            if(0<=j&&j<=100&&tarou[i]>0&&hanako[j]>0) {
                printf("%d %d\n",i,j);
                OK=1;
                break;
            }
         }
         if(!OK) printf("-1\n");
    }
}