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
const int MAXN = (int) 5e5 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int E;

void work(){
    while(~scanf("%d",&E)&&E){
        int m=INF;
        for(int z=0;z*z*z<=E;z++){
            for(int y=0;y*y<=E-z*z*z;y++){
                int x=E-y*y-z*z*z;
                m=min(m,x+y+z);
            }
        }
        printf("%d\n",m);
    }
}

int main(){
#ifdef NNever
//    freopen("data.in","r",stdin);
//    freopen("out.txt","w",stdout);
#endif // NNever
    work();
    return 0;
}

