#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n,m;

int s1[105]={};
int s2[105]={};


int main(){
    while(1){
        int sum1=0;
        int sum2=0;
        
        scanf("%d %d",&n,&m);
        if(n == 0 && m == 0) break;
        for(int i=0;i<n;i++){
            scanf("%d",&s1[i]);
        }
        for(int i=0;i<m;i++){
            scanf("%d",&s2[i]);
        }
        for(int i=0;i<n;i++) sum1 += s1[i];
        for(int i=0;i<m;i++) sum2 += s2[i];
    
        int d = sum1 - sum2;
        if(d & 1){
            printf("-1\n");
        }else{
            sort(s1,s1+n);
            sort(s2,s2+m);

            int judge = 0;
            int a,b;

            for(int i=0;i<m;i++){
                a = s2[i];
                b = a + d/2;
                if(b < 0 || b > 100) continue;
                for(int j=0;j<n;j++){
                    if(b == s1[j]){
                        judge = 1;
                        break;
                    }
                    if(b < s1[j]) break;
                }
                if(judge) break;
            }
            if(judge) printf("%d %d\n",b,a);
            else printf("-1\n");
        }
    }
}
