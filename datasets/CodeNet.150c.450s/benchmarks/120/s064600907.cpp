#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAX_R=15;
const int MAX_C=10005;
bool pan[MAX_R][MAX_C]={0};

int r,c;

void reverse(int row){
    for(int i=0; i<c; i++){
        if(pan[row][i]==0) pan[row][i]=1;
        else pan[row][i]=0;
    }
}

int dfs(int row){
    if(row==r){
        int cnt=0;
        int a,ano;
        for(int j=0; j<c; j++){
            a=0;
            for(int i=0; i<r; i++){
                if(pan[i][j]==1) a++;
            }
            ano=r-a;
            //a>r-a?(cnt+=a):(cnt+=(r-a));
            ano>a?(cnt+=ano):(cnt+=a);
        }
        return cnt;
    }
    int a=dfs(row+1);
    reverse(row);
    int b=dfs(row+1);
    return a>b?a:b;
}

int main(){
    while((scanf("%d%d", &r, &c)!=EOF)){
        if(r==0&&c==0) break;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>pan[i][j];
            }
        }
        cout<<dfs(0)<<endl;
    }
}
