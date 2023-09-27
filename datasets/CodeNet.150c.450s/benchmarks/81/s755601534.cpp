#include <cstdio>
#include <cstring>
#include <climits>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;
ll dist[10][10];
int main() {
    int n;
    while (scanf("%d",&n)!=EOF) {
        if (!n) break;
        for (int i=0; i<10; i++) for (int j=0; j<10; j++) {
            if (i==j) dist[i][j]=0;
            else dist[i][j]=INT_MAX;
        }
        set<int> town;
        int a, b, c;
        for (int i=0; i<n; i++) {
            scanf("%d%d%d",&a,&b,&c);
            dist[a][b]=c;
            dist[b][a]=c;
            town.insert(a); town.insert(b);
        }
        int sz=town.size();
        for (int k=0; k<sz; k++) {
            for (int i=0; i<sz; i++) {
                for (int j=0; j<sz; j++) {
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        int rpos, res=INT_MAX;
        for (int i=0; i<sz; i++) {
            int sum=0;
            for (int j=0; j<sz; j++) if (dist[i][j]!=INT_MAX) sum+=dist[i][j];
            if (sum<res) {
                rpos=i;
                res=sum;
            }
        }
        printf("%d %d\n",rpos,res);
    }
}