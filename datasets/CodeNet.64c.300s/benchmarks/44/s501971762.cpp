#include <cstdio>
#include <algorithm>
using namespace std;
#define INF 1000000
int C[15][15];
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        for(int i=0;i<15;++i){
            for(int j=0;j<15;++j){
                C[i][j]=i==j?0:INF;
            }
        }
        int m=0;
        for(int i=0;i<n;++i){
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            m=max(m,max(a,b));
            C[a][b]=C[b][a]=c;
        }
        m++;
        for(int k=0;k<m;++k){
            for(int i=0;i<m;++i){
                for(int j=0;j<m;++j){
                    C[i][j]=min(C[i][j],C[i][k]+C[k][j]);
                }
            }
        }
        int ln=INF,lc=INF;
        for(int i=m-1;i>=0;--i){
            int c=0;
            for(int j=0;j<m;++j){
                c+=C[i][j];
            }
            if(c<=lc){
                ln=i;
                lc=c;
            }
        }
        printf("%d %d\n",ln,lc);
    }
    return 0;
}