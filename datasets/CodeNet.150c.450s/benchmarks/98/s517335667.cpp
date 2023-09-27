#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m), n != 0 || m != 0){
        int t[101]={0}, h[101]={0}, st=0, sh=0;
        for(int i=0;i<n;++i){
            scanf("%d",&t[i]);
            st += t[i];
        }
        for(int i=0;i<m;++i){
            scanf("%d",&h[i]);
            sh += h[i];
        }
        int dif = st - sh;
        if(dif % 2 != 0){
            printf("-1\n");
            continue;
        }
        bool flag=false;
        int mini = INT_MAX, a,b;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int d = t[i] - h[j];
                if(d == dif/2){
                    if(t[i] + h[j] < mini){
                        a = t[i];
                        b = h[j];
                        mini = a + b;
                    }
                    flag = true;
                }
            }
            if(flag)break;
        }
        if(flag == false)printf("-1\n");
        else printf("%d %d\n",a,b);
    }

    return 0;
}