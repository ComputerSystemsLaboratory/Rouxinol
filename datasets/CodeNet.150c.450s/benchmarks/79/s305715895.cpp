#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int n,int r){
    vector<int> m;
    for(int i=0;i<n;i++){
        m.push_back(i);
    }
    for(int i=0;i<r;i++){
        int p,c;
        scanf("%d %d",&p,&c);
        rotate(m.begin(),m.begin()+p-1,m.begin()+p+c-1);
    }
    return n-m[0];
}

int main(){
    while(1){
        int n,r;
        scanf("%d %d",&n,&r);
        if(n==0&&r==0) return 0;
        printf("%d\n",solve(n,r));
    }
}