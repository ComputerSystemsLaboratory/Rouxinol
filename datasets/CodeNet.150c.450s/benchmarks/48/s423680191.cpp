#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int e;
    while(scanf("%d",&e),e){
        int m=1<<25;
        for(int i=0;i*i*i<=e;i++){
            for(int j=0;i*i*i+j*j<=e;j++){
                int val=i*i*i+j*j;
                m=min(m,i+j+(e-val));
            }
        }
        printf("%d\n",m);
    }
    return 0;
}