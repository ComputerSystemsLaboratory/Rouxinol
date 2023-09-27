#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

int n;


int main(){
    int dy[]={0,1,0,-1};
    int dx[]={-1,0,1,0};
    
    while(cin>>n){
        int left=1000,right=-1,up=1000,down=-1;
        if(n==0)break;
        
        vector<pii> point(300);
        point[0]=pii(250,250);
        
        left=min(left,point[0].second);
        right=max(right,point[0].second);
        up=min(up,point[0].first);
        down=max(down,point[0].first);
        
        rep(i,n-1){
            int num,dir;
            cin>>num>>dir;
            point[i+1]=pii(point[num].first + dy[dir],point[num].second + dx[dir]);
            left=min(left,point[i+1].second);
            right=max(right,point[i+1].second);
            up=min(up,point[i+1].first);
            down=max(down,point[i+1].first);
        }
        cout<<right-left+1<<" "<<down-up+1<<endl;
    }
    
    
    return 0;
}