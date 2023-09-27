#include <bits/stdc++.h>

#define ll long long

using namespace std;


int m,Nmin,Nmax;

int P[205]={};


int main(){

    while(1){
        int ans = 0;
        scanf("%d %d %d",&m,&Nmin, &Nmax);
        if(m == 0 && Nmin == 0 && Nmax == 0) break;

        for(int i=0;i<m;i++){
            scanf("%d",&P[i]);
        }
        int max_gap = 0;
        for(int i=Nmin-1;i<Nmax;i++){
            int gap = P[i] - P[i+1];
            if(max_gap <= gap){
                max_gap = gap;
                ans = i+1;
            }
        }
        printf("%d\n",ans);
    }


}
