#include<iostream>
#include<cstdio>
#include<vector>
 
#define INF 999999999
#define ll long long
 
using namespace std;
 
const int MAX_N = 100000;
const int MAX_M = 500000;
 
struct edge
{
    int from;  //?????????
    int to;    //??°??????
    int cost;  //??????
};
 
int d[MAX_N];
edge es[MAX_M];
bool flag;  //???????????????????????????
 
void shortest_path(int n,int m,int s)   //s???????????????????????????????????????????????¢????±???????
{
    int cnt = 0;
    fill(d,d+n,INF);
    d[s] = 0;
    while(true && cnt < n){
        bool update = false;
        for(int i=0;i<m;i++){
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if(!update) break;
        cnt++;
    }
    if(cnt == n){
        flag = true;
    }
}
 
int main()
{
    int i,n,m,s;
    cin >> n;  //????????°
    cin >> m;  //?????°
    cin >> s;  //???????????????
    for(int i=0;i<m;i++){
        scanf("%d",&es[i].from);
        scanf("%d",&es[i].to);
        scanf("%d",&es[i].cost);
    }
    flag = false;
    shortest_path(n,m,s);
    if(!flag){
        for(int i=0;i<n;i++){
            if(d[i] == INF){
                cout << "INF\n";
            }else{
                cout << d[i] << "\n";
            }
        }
    }else{
        cout << "NEGATIVE CYCLE\n";
    }
}
