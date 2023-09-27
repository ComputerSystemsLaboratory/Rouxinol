
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 1000000000
#define rep(i,n) for(int i =0;i<n;i++)
using namespace std;
typedef long long int ll;

int main(){
    for(;;){
        int n;
        cin >> n;
        if(!n)break;
        int g[500][500];
        for (int i=0; i<500; i++) {
            for (int j=0; j<500; j++) {
                g[i][j]=0;
            }
        }
        vector<pair<int,int> > memo(250);
        for (int i=0; i<250; i++) {
            memo[i].first=0;
            memo[i].second=0;
        }
        g[250][250]=1;
        memo[0].first=250;
        memo[0].second=250;
        for (int i=1; i<n; i++) {
            int n,d;
            cin >> n >> d;
            int s=0,t=0;
            if (d==0) s=-1;
            if (d==1) t=-1;
            if (d==2) s=1;
            if (d==3) t=1;
            int ii=memo[n].first+s;
            int jj=memo[n].second+t;
            g[ii][jj]=1;
            memo[i].first=ii;
            memo[i].second=jj;
        }
        int u=0,m=0,h=0,s=0;
        for (int i=0; i<500; i++) {
            int ch=0;
            for (int j=0; j<500; j++) {
                if(g[i][j]!=0){
                    u=i;
                    ch++;
                    break;
                }
            }
            if(ch==1) break;
        }
        for (int i=499; i>=0; i--) {
            int ch=0;
            for (int j=0; j<500; j++) {
                if(g[i][j]!=0){
                    s=i;
                    ch++;
                    break;
                }
            }
            if(ch==1) break;
        }
        for (int i=0; i<500; i++) {
            int ch=0;
            for (int j=0; j<500; j++) {
                if(g[j][i]!=0){
                    h=i;
                    ch++;
                    break;
                }
            }
            if(ch==1) break;
        }
        for (int i=499; i>=0; i--) {
            int ch=0;
            for (int j=0; j<500; j++) {
                if(g[j][i]!=0){
                    m=i;
                    ch++;
                    break;
                }
            }
            if(ch==1) break;
        }
        cout << s-u+1<<" "<< m-h+1<<endl;
    }
}