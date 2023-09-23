#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1e+9

int main() {
	int n;
    while(cin>>n){
        if(!n)break;
        
        int a,b,c,v=0,d[11][11];
        
        for(int i=0;i<11;i++){
            for(int j=0;j<11;j++){
                if(i==j)d[i][j]=0;
                else d[i][j]=INF;
            }
        }
        
        for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            d[a][b]=c;
            d[b][a]=c;
            v=max(max(v,a),b);
        }
        
        for(int k=0;k<=v;k++){
            for(int i=0;i<=v;i++){
                for(int j=0;j<=v;j++)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
        int  ans1=INF,ans2;
        for(int i=0;i<=v;i++){
            int count=0;
            for(int j=0;j<=v;j++){
                count+=d[i][j];
            }
            if(ans1>count){
                ans1=count;
                ans2=i;
            }
        }
        
        cout<<ans2<<" "<<ans1<<endl;
    }
	return 0;
}