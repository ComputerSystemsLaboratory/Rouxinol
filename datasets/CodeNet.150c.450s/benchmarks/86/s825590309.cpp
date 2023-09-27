#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=1<<17,INF=1<<30;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N,M,P;cin>>N>>M>>P;
        
        if(N==0&&M==0&&P==0) return 0;
        
        M--;
        int sum=0,win=0;
        
        for(int i=0;i<N;i++){
            int a;cin>>a;
            sum+=a;
            if(i==M) win=a;
        }
        
        sum*=(100-P);
        
        if(win==0) cout<<0<<endl;
        else cout<<sum/win<<endl;
    }
}

