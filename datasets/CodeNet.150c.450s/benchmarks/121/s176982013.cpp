#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <map>
#include <stdlib.h>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 10000000000LL
#define rep(i,n) for(i=0;i<n;i++)

typedef pair<int,int> pii;

int i,j;
char a[105][105];
int used[105][105];
int h,w;

void search(int x,int y,char c){
    if(x<0 || y<0 || x>=h || y>=w || a[x][y]!=c)return;
    if(used[x][y])return;
    used[x][y]++;
//    printf("x=%d,y=%d",x,y);
    search(x-1,y,c);
    search(x,y-1,c);
    search(x+1,y,c);
    search(x,y+1,c);
    return;
}

int main(void) {
    while(1){
        cin>>h>>w;
        if(h==0 && w==0)break;
        rep(i,h)rep(j,w)used[i][j]=0;
        rep(i,h)
            cin>>a[i];
        int ans=0;
        
        rep(i,h)rep(j,w)if(used[i][j]==0){
            ans++;
           // printf("i=%d,j=%d",i,j);
       //     cout<<endl;
            search(i,j,a[i][j]);
        }
        cout<<ans<<endl;
    }
    return 0;
}