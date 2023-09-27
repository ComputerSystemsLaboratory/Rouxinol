#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int w,n,x,y;
    scanf("%d",&w);
    vector<int> l(w+1);
    for(int i=0;i<w+1;i++){
        l[i]=i;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d,%d",&x,&y);
        swap(l[x],l[y]);
    }
    for(int i=1;i<w+1;i++){
        printf("%d\n",l[i]);
    }
    return 0;
}