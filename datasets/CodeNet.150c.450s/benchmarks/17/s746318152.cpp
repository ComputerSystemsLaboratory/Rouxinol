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
    int a[5];for(int i=0;i<5;i++){cin>>a[i];}sort(a,a+5,greater<int>());for(int i=0;i<5;i++){cout<<a[i];cout<<(i!=4?" ":"\n");}
    return 0;
}
