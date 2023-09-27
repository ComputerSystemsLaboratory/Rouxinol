#include<bits/stdc++.h>
#define all(vec) vec.begin(),vec.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const double EPS=1e-10;
const ll INF=1000000000;
const ll MAX=100010;
int main(){
    int a0,l;
    while(cin>>a0>>l,a0+l){
        int a[100010];
        a[0]=a0;
        for(int i=0;i<50;i++){
            int d[7]={};
            int t=a[i];
            for(int j=0;j<l;j++){
                d[j]=t%10;
                t/=10;
            }
            sort(d,d+l);
            int ma=0;int mi=0;
            for(int j=0;j<l;j++){
                ma*=10;
                mi*=10;
                ma+=d[l-1-j];
                mi+=d[j];
            }
            a[i+1]=ma-mi;
            bool f=false;
            for(int j=0;j<=i;j++){
                if(a[j]==a[i+1]){
                    f=true;
                    cout<<j<<" "<<a[j]<<" "<<i+1-j<<endl;
                    break;
                }
            }
            if(f){
                break;
            }
        }
    }
}
