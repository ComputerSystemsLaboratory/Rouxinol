#include<bits/stdc++.h>

using namespace std;

int load[17][17] = {0};
int mem[20][20] = {0};
int f(int x,int y)
{
    if(mem[x][y]!=0)return mem[x][y];
    if(x == 1 && y == 1)return 1;
    if(x <= 0 || y <= 0)return 0;
    if(load[x][y] == 0) return mem[x][y]=f(x - 1,y) + f(x,y - 1);
    return 0;
}

int main()
{
    int a,b,n,x,y;
    while(1){
        memset(load,0,sizeof(load));
        memset(mem,0,sizeof(mem));
        cin >> a >> b;
        if(a == 0 && b == 0)break;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> x >> y;
            load[x][y]=-1;
        }
    cout << f(a,b) << endl;
    }
    return 0;
}