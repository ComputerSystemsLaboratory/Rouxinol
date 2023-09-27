#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=998244353,MAX=100005,INF=1<<28;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        vector<int> A(N);
        for(int i=0;i<N;i++) cin>>A[i];
        sort(all(A));
        
        int ans=INF;
        
        for(int i=1;i<N;i++) ans=min(ans,A[i]-A[i-1]);
        
        cout<<ans<<endl;
    }
}

