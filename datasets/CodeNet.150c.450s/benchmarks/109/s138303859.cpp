#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(i,x) for(auto i=(x).begin(); i!=(x).end();i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vec vector
#define INF INT_MAX
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};
const int limit=60;
using namespace std;

int main(){
    int n;
    int t=24*3600+59*60+59;
    while(cin>>n&&n){
        vector<int> v(t+1,0);
        rep(i,0,n){
            int hs,ms,ss,he,me,se;
            scanf("%d:%d:%d",&hs,&ms,&ss);
            scanf("%d:%d:%d",&he,&me,&se);
            v[hs*3600+ms*60+ss]++;
            v[he*3600+me*60+se]--;
        }

        int ans=0;
        rep(i,0,t){
            v[i+1]+=v[i];
            /*if(ans<v[i+1]){
                int ii=i;
                cout<<i/3600<<" "<<(i%3600)/60<<" "<<(i%60)<<endl;
            }*/
            ans=max(ans,v[i+1]);
        }
        cout<<ans<<endl;

    }
    
    return 0;
}

/*
111000
011000
001000
000100
000110
000111
*/

