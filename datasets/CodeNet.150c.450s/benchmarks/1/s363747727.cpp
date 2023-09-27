#include<iostream>
#include<algorithm>
using namespace std;
int A[100100],L[100100],P[100100];
int n,ans;

void simple_DP(){
    //添字が一つずれていることに注意
    A[0]=-1;
    P[0]=-1;

    for(int i=1;i<=n;++i){//DP about A[i]
        int k=0;
        for(int j=0;j<i;++j){//define recurrence relation
            if(L[j]>L[k] && A[j]<A[i]){
                k=j;
            }
            L[i]=L[k]+1;
            P[i]=k;
        }
    }

    ans=0;
    for(int i=1;i<=n;++i){
        ans=max(ans,L[i]);
    }

    cout<<ans<<endl;
    /*for debug
    for(int i=1;i<=n;++i){
        cout<<L[i]<<endl;
    }
    */
}

void LIS(){
    int length=1;
    L[0]=A[0];

    for(int i=1;i<n;++i){
        if(L[length-1]<A[i]){
            L[length++]=A[i];
        }
        else{
            *lower_bound(L,L+length,A[i])=A[i];
        }
    }
    cout<<length<<endl;
}

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>A[i];
    }


    LIS();

    //simple_DP(); TLE
}
