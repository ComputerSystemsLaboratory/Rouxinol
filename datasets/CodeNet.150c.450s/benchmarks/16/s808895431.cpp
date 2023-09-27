#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>
using namespace std;
const int MAXN = (int) 2e4 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int N;
char s[MAXN];
int st[MAXN],top;
vector<pair<int,int> > g;
vector<int> ANS;

void work(){
    scanf("%s",s);
    int len=strlen(s);
    top=0;
    g.clear();
    int ans=0;
    for(int i=0;i<len;i++){
        if(s[i]=='\\') st[++top]=i;
        else if(s[i]=='/'){
            if(top>0){
                int id=st[top--];
                ans+=i-id;
                g.push_back(make_pair(id,i));
            }
        }
    }
    for(int i=g.size()-1;i>=0;){
        int l=g[i].first;
        int r=g[i].second;
        int x=r-l;
        int j=i-1;
        while(j>=0&&g[j].first>=l&&g[j].second<=r){
            int L=g[j].first;
            int R=g[j].second;
            j--;
            x+=R-L;
        }
        i=j;
        ANS.push_back(x);
    }
    printf("%d\n",ans);
    printf("%d",ANS.size());
    for(int i=ANS.size()-1;i>=0;i--) printf(" %d",ANS[i]);
    printf("\n");
}

int main(){
#ifdef NNever
//    freopen("data.in","r",stdin);
//    freopen("out.txt","w",stdout);
#endif // NNever
    work();
    return 0;
}



