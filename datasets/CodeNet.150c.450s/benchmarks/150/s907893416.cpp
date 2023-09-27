#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> C(10001,0);
    int n,i,j;
    cin>>n;
    vector<int> A(n+1),B(n+1);
    for(i=1;i<=n;++i)
    {
        cin>>A[i];
        C[A[i]]++;
    }
    for(i=1;i<=10001;++i)
    {
        C[i]=C[i]+C[i-1];
    }
    for(j=1;j<=n;++j)
    {
        B[C[A[j]]]=A[j];
        C[A[j]]--;
    }

    for(i=1;i<=n;++i)
    {
        if(i>1)cout<<" ";
        cout<<B[i];
    }
    cout<<endl;

    return 0;
}

