#include <cstdio>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
using namespace std;

typedef vector<int>::iterator vitr;
typedef map<int, int>::iterator mitr;

map<int, int> w[100];
int d[100];

vector<int> a;
vector<int> b;

void findPath(){
    int candiW = INT_MAX;
    vitr candiI;
    for(vitr i=a.begin();i!=a.end();i++){
        for(vitr j=b.begin();j!=b.end();j++){
            mitr k = w[*i].find(*j);
            if(k == w[*i].end())continue;
            if(k->second + d[*i] < candiW){
                candiW = k->second + d[*i];
                candiI = j;
            }
        }
    }
    a.push_back(*candiI);
    d[*candiI] = candiW;
    b.erase(candiI);
}

int main(){
    int i,j,u,k,n,v,c;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d %d",&v,&c);
            w[u][v] = c;
        }
    }

    d[0] = 0;
    a.push_back(0);
    for(i=1;i<n;i++)b.push_back(i);

    for(i=1;i<n;i++)findPath();

    for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);

    return 0;
}

