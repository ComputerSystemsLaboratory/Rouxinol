#include <iostream>
#include <cstring>
#include <stack>
#include <algorithm>
using namespace std;

int N,A[100005],L[100005];

int main()
{
    L[0]=0;
    cin>>N;
    int i,j;
    for(i=1;i<=N;i++){
        cin>>A[i];
    }
    int len=1;
    L[0]=A[1];
    for(i=1;i<=N;i++){
        if(L[len-1]<A[i])L[len++]=A[i];
        else *lower_bound(L,L+len,A[i])=A[i];
    }
    cout<<len<<endl;
    return 0;
}