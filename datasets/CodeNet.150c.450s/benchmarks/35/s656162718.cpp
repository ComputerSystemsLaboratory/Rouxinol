#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    for(;;){
        scanf("%d",&n);
        if(n==0) break;
        vector<int> upuse(n);
        int ins;
        scanf("%d",&ins);
        upuse[0]=ins;
        int ma=ins;
        for(int i=1;i<n;i++){
            scanf("%d",&ins);
            upuse[i]=max(ins,upuse[i-1]+ins);
            ma=max(upuse[i],ma);
        }
        printf("%d\n",ma);
    }
}