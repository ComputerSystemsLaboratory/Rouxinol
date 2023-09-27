#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < (int)n;i++)
#define repb(i, n) for(int i = (int)n;i >= 0;i--)
#define reps(i, m, n) for(int i = (int)m;i < (int)n;i++)
#define repsb(i, m, n) for(int i = (int)m;i >= (int)n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
#define INF 999999999999999999
using namespace std;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
using namespace std;
std::vector<int> v;
int main(int argc, char const *argv[]) {
  int x,y,mini,maxi;
  while (true){
    cin>>x>>y;
    if(x==0&&y==0)  return 0;
    maxi=max(x,y);
    mini=min(x,y);
    cout<<mini<<" "<<maxi<<endl;
  }
 return 0;
}

