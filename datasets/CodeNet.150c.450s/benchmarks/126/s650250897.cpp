#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

int dp[2][1000002];

int main(){
	int a,b,n,x,y;
	while(cin>>a>>b,a||b){
        set<int> koji;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            koji.insert(y*100002+x);
        }
        for(int i=0;i<2;i++)for(int j=1;j<=a;j++) dp[i][j]=0;
        dp[1][1]=1;
        for(int i=1;i<=b;i++){
            for(int j=1;j<=a;j++){
                set<int>::iterator itr=koji.find(i*100002+j);
                if(!(itr==koji.end())){
                    dp[i&1][j]=0;
                    //printf("0 ");
                    continue;
                }

                //printf("%d %d\n",i,j);
                //dp[i&1][j]%=100000;
                dp[(i+1)&1][j]+=dp[i&1][j]/*%100000*/;
                dp[i&1][j+1]+=dp[i&1][j]/*%100000*/;
                //printf("%d ",dp[i&1][j]);
                if(i!=b || j!=a){
                    dp[i&1][j]=0;
                }
            }//puts("");
        }
        printf("%d\n",dp[b&1][a]/*%100000*/);
	}
	return 0;
}