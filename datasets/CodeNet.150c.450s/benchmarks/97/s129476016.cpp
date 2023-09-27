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
        int data[500][500]={};
        if(n==0)break;
        
        vector<pii> point(300);
        
        point[0]=pii(250,250);
        data[point[0].first][point[0].second]=1;
        
        rep(i,n-1){
            int num,dir;
            cin>>num>>dir;
            data[point[num].first + dy[dir]][point[num].second + dx[dir]]=1;
            point[i+1]=pii(point[num].first + dy[dir],point[num].second + dx[dir]);
        }

        int maxw=0;
        int left=1000,right=-1;
        rep(i,500){
            rep(j,500){
                if(data[i][j]==1){
                    left=min(left,j);
                    right=max(right,j);
                }
            }
        }
        maxw=max(maxw,right-left+1);


        int maxh=0;
        int up=1000,down=-1;
        rep(j,500){
            rep(i,500){
                if(data[i][j]==1){
                    up=min(up,i);
                    down=max(down,i);
                }
            }
        }
        maxh=max(maxh,down-up+1);
        cout<<maxw<<" "<<maxh<<endl;
        
    }
    
    
    return 0;
}