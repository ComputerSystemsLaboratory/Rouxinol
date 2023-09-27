#include<cstdio>
#include<algorithm>
#include<cmath>
typedef long long ll;
int m,k;
int a[200010];

template<typename T>
inline void read(T &x){
    x = 0; char ch = getchar(); int f = 1;
    for(;ch < '0' || ch > '9'; ch = getchar()) if(ch == '-') f = -1;
    for(;ch >= '0' && ch <= '9'; ch = getchar()) x = x * 10 + ch - '0';
    x *= f;
}

int main(){
    read(m); read(k);
    for(int i = 1;i <= m; i++) read(a[i]);
    for(int i = k + 1;i <= m; i++)
        if(a[i] > a[i - k]) printf("Yes\n");
        else printf("No\n");
    return 0;
}
/*
3
1
-1
-1

2
*/