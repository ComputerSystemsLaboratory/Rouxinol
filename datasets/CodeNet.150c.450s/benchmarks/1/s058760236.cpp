#if 0



#endif // 0

#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>
using namespace std;
const int MAXN = (int) 1e5 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;
int N;
int mi[MAXN],len;

void work(){
    while(~scanf("%d",&N)){
        len=0;
        for(int i=1;i<=N;i++){
            int a; scanf("%d",&a);
            if(len==0) mi[++len]=a;
            else{
                int pos=lower_bound(mi+1,mi+len+1,a)-mi;
                if(pos>len) mi[++len]=a;
                else mi[pos]=a;
            }
        }
        printf("%d\n",len);
    }
}

int main(){
    work();
    return 0;
}

