#include <iostream>
#include <bitset>
using namespace std;
#define MAXN 11
#define MAXM 10001
int n,m;
bitset<MAXM> A[MAXN];

bool input()
{
    cin>>n>>m;
    if(!n&&!m)return false;
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>tmp;
            A[i][j] = tmp;
        }
    }
    return true;
}

int res;
void dfs(int id)
{
    if(id==n){
        int cnt = 0;
        for(int j=0;j<m;j++){
            int tmp=0;
            for(int i=0;i<n;i++){
                if(A[i][j]==0)tmp++;
            }
            tmp = max(tmp, n-tmp);
            cnt += tmp;
        }
        res = max(res, cnt);
        return;
    }
    dfs(id+1);
    A[id].flip();
    dfs(id+1);
    A[id].flip();
}

int main()
{
    while(input()){
        res = 0;
        dfs(0);
        cout<<res<<endl;
    }
    return 0;
}

