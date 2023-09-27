#include <iostream>
#include <utility>
#include <vector>
#include <queue>
using namespace std;
#define INF 2400000000
long long int Min(long long int x,long long int y){
        return x>y?y:x;
}
int main(){
        int N;
        cin >> N;
        vector <vector <long long int> > adjancent(N,vector <long long int>(N,INF));
        for(int i=0 ; i<N ; i++ ){
                int n,degree,to,cost;
                cin >> n >> degree;
                for(int l=0 ; l<degree ; l++ ){
                        cin >> to >> cost;
                        adjancent[n][to]=cost;
                }
        }
        vector<long long int> dp(N,INF);
        dp[0]=0;
        bool sign=true;
        while(sign){
                sign=false;
                for(int now=0 ; now<N ; now++){
                        for(int i=0 ; i<N ; i++ ){
                                int tmp=dp[i];
                                dp[i]=Min(dp[i],dp[now]+adjancent[now][i]);
                                if(tmp!=dp[i])
                                        sign=true;
                        }
                }
        }
        for(int i=0 ; i<N ; i++ )
                cout <<i<<" "<<dp[i]<<endl;
        return 0;
}

