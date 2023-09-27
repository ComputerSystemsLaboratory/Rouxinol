#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

#define MAX 100
#define Infty 9999999999
using namespace std;

int n,e;
long long d[MAX][MAX];

void floyd(){
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            if (d[i][k]==Infty)
                continue;
            for (int j = 0; j < n; ++j) {
                if (d[k][j]==Infty)
                    continue;
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}

int main() {
    scanf("%d %d",&n,&e);
    int s,t,v;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            d[i][j]=((i==j)?0:Infty);
        }
    }

    for (int k = 0; k < e; ++k) {
        scanf("%d %d %d",&s,&t,&v);
        d[s][t]=v;
    }
    floyd();

    bool negative=false;
    for (int l = 0; l < n; ++l) {
        if (d[l][l]<0)
            negative= true;
    }

    if (negative)
        cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j)
                    cout<<" ";
                if (d[i][j]==Infty)
                    cout<<"INF";
                else
                    cout<<d[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}