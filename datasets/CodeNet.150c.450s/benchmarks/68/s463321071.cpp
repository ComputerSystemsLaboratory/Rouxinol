#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
using namespace std;
#define N (1000000000+7)
typedef pair<int,int> P;
typedef long long ll;
int d[100010][3];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
char board[1010][1010];

struct edge{
    int to,cost;
};

int a[105];


vector<edge>graph[100010];

int main(void){
    int n;
    while(true){
        cin>>n;
        if(n==0)break;
        int suma=0,sumb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=(int)abs(a[0]-a[1]);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(ans>(int)abs(a[i]-a[j]))ans=(int)abs(a[i]-a[j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
