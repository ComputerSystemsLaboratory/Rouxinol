#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < n;i++)
#define repb(i, n) for(int i = n;i >= 0;i--)
#define reps(i, m, n) for(int i = m;i < n;i++)
#define repsb(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef long long ll;
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
using namespace std;
int n,p,i=0,temp,pos;
bool flg=true;
int pre[50]={};

void cal(void){
  while(true){
    if(temp){
      pre[pos]++;
      temp--;
      if(pre[pos]==p){
        cout<<pos<<endl;
        return;
      }
    }
    else{
      temp=pre[pos];
      pre[pos]=0;
    }
    pos++;
    if(pos==n) pos=0;
  }
}
int main(int argc, char const *argv[]) {

 while (true) {
   cin>>n>>p;
   if(n==0&&p==0) break;
   rep(i,n) pre[i]=0;
   temp=p;
   pos=0;
   cal();
 }
 return 0;
}

