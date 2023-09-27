#include<iostream>
using namespace std;

int* lower_bound(int *l,int *r,int val){
    int n=r-l;
    int lb=-1,ub=n;
    while(ub-lb>1){
        int mid=(ub+lb)/2;
        if(*(l+mid)>=val)ub=mid;
        else lb=mid;
    }
    return l+ub;
}

void fill_n(int *l,int n,int val){
    for(int i=0;i<n;i++)*(l+i)=val;
}
const int INF=1001001001;
int N;
int dp[100010];

int main(){
    cin>>N;
    fill_n(dp,N+2,INF);
    dp[0]=-1;

    for(int i=0;i<N;i++){
        int A;cin>>A;
        *lower_bound(dp,dp+N+3,A)=A;
    }

    cout<<lower_bound(dp,dp+N+3,INF)-dp-1<<endl;
}