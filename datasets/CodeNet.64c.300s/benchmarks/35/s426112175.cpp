#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <cmath>
#include <cstring>

#define LP(i,n) for(int i=0;i<n;i++)
#define Mset(x,v) memset(x,v,sizeof(x))

using namespace std;
using LL=long long;

int A[110][110];

int main(){
    int n,m,a,b;
    cin>>n;
    LP(i,n){
        cin>>a>>m;
        LP(j,m){
            cin>>b;
            A[a-1][b-1]=1;
        }
    }
    LP(i,n){
        LP(j,n){
            if(j==n-1) cout<<A[i][j]<<endl;
            else cout<<A[i][j]<<" ";
        }
    }
    return 0;
}

