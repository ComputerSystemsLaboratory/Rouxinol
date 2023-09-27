#include<cstdio>
#include<vector>
using namespace std;
int main(){
    for(;;){
        int a,b,n;
        scanf("%d%d",&a,&b);
        if(a==0&&b==0)break;
        vector<vector<int> > ps(a,vector<int>(b,0));
        scanf("%d",&n);
        int x,y;
        for(int ix=0;ix<n;ix++){
            scanf("%d%d",&x,&y);
            ps[x-1][y-1]=-1;
        }
        ps[0][0]=1;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(ps[i][j]!=-1){
                    if(i-1>=0&&ps[i-1][j]!=-1)ps[i][j]+=ps[i-1][j];
                    if(j-1>=0&&ps[i][j-1]!=-1)ps[i][j]+=ps[i][j-1];
                }
            }
        }
        printf("%d\n",ps[a-1][b-1]);
    }
}