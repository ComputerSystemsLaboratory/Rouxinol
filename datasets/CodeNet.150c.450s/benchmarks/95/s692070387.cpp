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
        int a=0,b=0;
        int cnt=0;
        
        for(int i=0;i<N;i++){
            string S;cin>>S;
            if(S=="lu") a++;
            if(S=="ld") a--;
            if(S=="ru") b++;
            if(S=="rd") b--;
            
            if(cnt%2==0&&a==1&&b==1) cnt++;
            if(cnt%2==1&&a==0&&b==0) cnt++;
        }
        
        cout<<cnt<<endl;
    }
}

