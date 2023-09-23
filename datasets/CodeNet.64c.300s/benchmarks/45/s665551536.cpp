#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>
using namespace std;
#define N (1000000000+7)
#define INF 1e16
typedef long long ll;
typedef pair<int,int> P;



int main(void){
    while(true){
        int m,n,p;
        cin>>m>>n>>p;
        if(m==0 && n==0 && p==0)break;
        int total=0;
        int winnum=0;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            total+=x;
            if(i==n-1)winnum=x;
        }
        total*=100;
        total=total*(100-p)/100;
        if(winnum!=0){
            int ans=(int)total/winnum;
            cout<<ans<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
