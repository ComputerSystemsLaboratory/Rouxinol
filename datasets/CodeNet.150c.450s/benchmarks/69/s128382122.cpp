#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 15;
int an[maxn], bm[maxn];
int arr[maxn];
bool cnt;

void dfs(int n, int m, int k);

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        for(int i = 0; i < 10; ++i){
            scanf("%d", &arr[i]);
        }
        cnt = false;
        an[0] = arr[0];
        bm[0] = -1;
        dfs(0, 0, 1);

        if(cnt){
            puts("YES");
        }
        else{
            puts("NO");
        }
    }
    return 0;
}

void dfs(int n, int m, int k){
    if(k == 10){
        cnt = true;
        return ;
    }

    if(arr[k] < an[n] && arr[k] < bm[m]){
        return ;
    }

    if(arr[k] > an[n]){
        an[n+1] = arr[k];
        dfs(n+1, m, k+1);
    }
    if(arr[k] > bm[m]){
        bm[m+1] = arr[k];
        dfs(n, m+1, k+1);
    }
}