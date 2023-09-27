#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-6;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
    int a[4],b[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
        bool f[4]={false};
        int h=0,bb=0;
        for(int i=0;i<4;i++){
            if(a[i]==b[i]){
                f[i]=true;
                h++;
            }
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(f[j])continue;
                if(b[i]==a[j]){
                    bb++;
                    break;
                }
            }
        }
        cout<<h<<" "<<bb<<endl;
    }
}
