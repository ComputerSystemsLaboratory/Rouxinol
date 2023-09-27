#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    for(;;){
        int r,c;
        scanf("%d%d",&r,&c);
        if(r==0&&c==0)break;
        vector<vector<bool> > sens(r,vector<bool>(c));
        int ins;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&ins);
                if(ins)sens[i][j]=false;
                else sens[i][j]=true;
            }
        }
        vector<vector<bool> > temp;
        int ma=0;
        for(int i=0;i<(1<<r);i++){
            temp=vector<vector<bool> >(sens);
            for(int j=0;j<r;j++){
                if(i&(1<<j)){
                    for(int k=0;k<c;k++)temp[j][k]=!temp[j][k];
                }
            }
            int sum=0;
            for(int j=0;j<c;j++){
                int whs=0;
                for(int k=0;k<r;k++)if(temp[k][j])whs++;
                sum+=max(whs,r-whs);
            }
            ma=max(ma,sum);
        }
        printf("%d\n",ma);
    }
}