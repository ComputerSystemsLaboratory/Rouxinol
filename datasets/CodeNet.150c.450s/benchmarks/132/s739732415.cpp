#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m),n||m){
        vector<int>V(n,0);
        int cnt=0,b=m;
        while(true){
            cnt%=n;
            if(b){
                b--;
                V[cnt]++;
            }
            else{
                b=V[cnt];
                V[cnt]=0;
            }
            if(V[cnt]==m){
                printf("%d\n",cnt);
                break;
            }
            cnt++;


        }
    }

}