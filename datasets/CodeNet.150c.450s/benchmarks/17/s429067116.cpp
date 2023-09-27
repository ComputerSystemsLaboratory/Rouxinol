#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
    int a[5];
    rep(i, 5) scanf("%d", a + i);
    rep(i, 5) rep(j, 5) if(a[i] > a[j]) std::swap(a[i], a[j]);
    rep(i, 5) printf("%d%c", a[i], i == 4 ? '\n' : ' ');
    return 0;
}