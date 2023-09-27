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
        int N,L,R;cin>>N>>L>>R;
        if(N==0) break;
        vector<int> A(N);
        for(int i=0;i<N;i++) cin>>A[i];
        
        int ans=-1,point=-1;
        
        for(int i=L;i<=R;i++){
            if(ans<=A[i-1]-A[i]){
                ans=A[i-1]-A[i];
                point=i;
            }
        }
        
        cout<<point<<endl;
    }
}

