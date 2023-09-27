#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin>>a[i];

    for(int i=0;i<N;i++){
        printf("node %d: key = %d, ",i+1,a[i]);
        if(i>0) printf("parent key = %d, ",a[(i-1)/2]);
        if(2*i+1<N) printf("left key = %d, ",a[2*i+1]);
        if(2*i+2<N) printf("right key = %d, ",a[2*i+2]);
        puts("");
    }
    return 0;
}
