#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
typedef pair<P,P> PP;
const ll MOD=10000;
const ll INF=1000000010;
const int MAX=100001;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    int w,n;
    cin>>w>>n;
    int c[40];
    for(int i=1;i<=w;i++){
        c[i]=i;
    }
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d,%d",&a,&b);
        swap(c[a],c[b]);
        
    }
    for(int i=1;i<=w;i++){
        cout<<c[i]<<endl;
    }
    return 0;
}
