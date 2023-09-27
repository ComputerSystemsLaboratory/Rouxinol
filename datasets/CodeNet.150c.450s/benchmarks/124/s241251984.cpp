#include <iostream>
#include <cstring>
#define MAX 120000
using namespace std;

int matrix[105][105],n,closest[105],close[105];

void djst(){
    int i,j,k;
    for(i=1;i<n;i++){
        if(matrix[0][i]!=-1)close[i]=matrix[0][i];
    }
    while(1){
        int mi=MAX,rec=-1;
        for(i=1;i<n;i++){
            if(close[i]!=-1&&close[i]<mi&&closest[i]==-1){
                mi=close[i];
                rec=i;
            }
        }
        if(rec==-1)break;
        closest[rec]=mi;
        close[rec]=MAX;
        for(j=1;j<n;j++){
            if(closest[j]==-1&&matrix[rec][j]!=-1){
                if(mi+matrix[rec][j]<close[j]||close[j]==-1)close[j]=mi+matrix[rec][j];
            }
        }
    }
}
int main(){
    memset(close,-1,sizeof(close));//memset??????????????¨0???-1???????????°???????§????
    memset(closest,-1,sizeof(closest));
    memset(matrix,-1,sizeof(matrix));
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(j=0;j<b;j++){
            int c,d;
            cin>>c>>d;
            matrix[a][c]=d;
        }
    }
    closest[0]=0;
    djst();
    for(i=0;i<n;i++){
        cout<<i<<" "<<closest[i]<<endl;
    }
    return 0;
}