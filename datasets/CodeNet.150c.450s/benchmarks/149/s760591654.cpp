#include<bits/stdc++.h>
using namespace std;
const int N = 10010;
int fa[N];
int findfa(int x){
    if(x == fa[x]) return x;
    return findfa(fa[x]);
}
int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i = 0; i < n; i++) fa[i] = i;
    for(int time = 0; time < q; time++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        
        if(a == 1){
            if(findfa(b) == findfa(c))
                printf("1\n");
            else
                printf("0\n");
        }else{
            fa[findfa(b)] = findfa(c);
        }
    }
    return 0;
}
