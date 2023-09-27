#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n[1005]={};
int m[1005]= {};

int s1[1005][105]={};
int s2[1005][105]={};

int sum1[1005]={};
int sum2[1005]= {};


int main(){
    int times = 0;
    while(1){
        
        scanf("%d %d",&n[times],&m[times]);
        if(n[times] == 0 && m[times] == 0) break;
        for(int i=0;i<n[times];i++){
            scanf("%d",&s1[times][i]);
            sum1[times] += s1[times][i];
        }
        for(int i=0;i<m[times];i++){
            scanf("%d",&s2[times][i]);
            sum2[times] += s2[times][i];
        }
        times ++;
    }
    for(int k=0;k<times;k++){
        int d = sum2[k]-sum1[k];
        if(abs(d%2) == 1){
            cout << "-1" << endl;
            continue;
        }
        int t[105] = {};
        int h[105] = {};
        for(int i=0;i<n[k];i++) t[i] = s1[k][i];
        for(int i=0;i<m[k];i++) h[i] = s2[k][i];
        sort(t,t+n[k]);
        sort(h,h+m[k]);
        for(int i=0;i<n[k];i++) s1[k][i] = t[i];
        for(int i=0;i<m[k];i++) s2[k][i] = h[i];

        int judge = 0;
        int a,b;

        for(int i=0;i<n[k];i++){
            a = s1[k][i];
            b = a + d/2;
            if(b < 0 || 100 < b) continue;
            for(int j=0;j<m[k];j++){
                if(b == s2[k][j]){
                    judge = 1;
                    break;
                }
                if(b < s2[k][j]) break;
            }
            if(judge) break;
        }
        if(judge) cout << a << " " << b << endl;
        else cout << "-1" << endl;
    }
}
