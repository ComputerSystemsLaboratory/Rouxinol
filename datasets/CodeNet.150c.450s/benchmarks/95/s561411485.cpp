#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n),n){
        int l=0,r=0,cnt=0,prev=0;
        for(int i=0;i<n;i++){
            char str[4];
            scanf("%s",str);
            int t;
            if(str[1]=='u')t=1;
            else t=0;
            if(str[0]=='l')l=t;
            else r=t;
            if(l==r&&prev!=l){
                prev=1-prev;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}